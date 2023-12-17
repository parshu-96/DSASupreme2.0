#include <iostream>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = d;
    }
};

Node* createTree()
{
    cout << "Enter the value for Node :" << endl;
    int value;
    cin >> value;
    if (value == -1)
    {
        return NULL;
    }
    Node *root = new Node(value);

    cout << "Enterting the left of value :" << value << endl;
    root->left = createTree();
    cout << "Enterting the right of value :" << value << endl;
    root->right = createTree();
    return root;
}

void PreOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout << root->data << endl;
    InOrderTraversal(root->right);
}

void PostOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << endl;
}

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    // Yaha Fasoge
    while (q.size() > 1)
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void printLeftView(Node *root, int level, vector<int> &leftView)
{
    if (root == NULL)
    {
        return;
    }
    if (level == leftView.size())
    {
        // Left View Wali node mil gayi hai}
        cout << root->data << endl;
        leftView.push_back(root->data);
    }
    printLeftView(root->left, level + 1, leftView);
    printLeftView(root->right, level + 1, leftView);
}
void printRightView(Node *root, int level, vector<int> &leftView)
{
    if (root == NULL)
    {
        return;
    }
    if (level == leftView.size())
    {
        // Left View Wali node mil gayi hai}
        cout << root->data << endl;
        leftView.push_back(root->data);
    }
    printRightView(root->right, level + 1, leftView);
    printRightView(root->left, level + 1, leftView);
}

void PrintTopView(Node *root)
{
    map<int, int> horizontalDistanceToNode;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontNode = temp.first;
        int hd = temp.second;
        // if there's no entry for hdd in map, create a new Entry
        if (horizontalDistanceToNode.find(hd) == horizontalDistanceToNode.end())
        {
            horizontalDistanceToNode[hd] = frontNode->data;
        }
        // Child ko dekhna hai
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "printing top view " << endl;
    for (auto i : horizontalDistanceToNode)
    {
        cout << i.second << " ";
    }
    cout << endl;
}

void PrintBottomView(Node *root)
{
    map<int, int> bottomViewMap;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> tempPair = q.front();
        q.pop();
        Node *tempNode = tempPair.first;
        int hd = tempPair.second;
        bottomViewMap[hd] = tempNode->data;
        if (tempNode->left != NULL)
        {
            q.push(make_pair(tempNode->left, hd - 1));
        }
        if (tempNode->right != NULL)
        {
            q.push(make_pair(tempNode->right, hd + 1));
        }
    }
    cout << "Printing  bottom View" << endl;
    for (auto i : bottomViewMap)
    {
        cout << i.second << " ";
    }
}


void PrintLeftBoundry(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    //This if else is very imp
    if(root->left!=NULL)
    {
        PrintLeftBoundry(root->left);
    }
    else
    {
        PrintLeftBoundry(root->right);
    }
}

void PrintLeafBoundry(Node* root)
{
     if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" "; 
    }
    PrintLeafBoundry(root->left);
    PrintLeafBoundry(root->right);
}

void PrintRightBoundry(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return; 
    }
    //This if else is very imp
    if(root->right!=NULL)
    {
        PrintRightBoundry(root->right);
    }
    else
    {
        PrintRightBoundry(root->left);
    }
    cout<<root->data<<" ";
}

void BoundryTraversal(Node* root)
{
    cout<<endl;
    cout<<"Inside Boundry Traversal"<<endl;
    if(root==NULL)
    {
        return;
    }
    PrintLeftBoundry(root);
    PrintLeafBoundry(root);
    if(root->right!=NULL)
    {
    PrintRightBoundry(root->right);
    }
    else
    {
        PrintRightBoundry(root->left);
    }
}

int main()
{
    Node *root = createTree();
    LevelOrderTraversal(root);
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    cout << endl;
    vector<int> ansLeft;
    cout << "Printing left View" << endl;
    printLeftView(root, 0, ansLeft);
    for (int i; i < ansLeft.size(); i++)
    {
        cout << ansLeft[i] << " ";
    }

    cout << "Printing Right View" << endl;
    vector<int> ansRight;
    printRightView(root, 0, ansRight);
    for (int i; i < ansRight.size(); i++)
    {
        cout << ansRight[i] << " ";
    }
    PrintTopView(root);
    PrintBottomView(root);
    BoundryTraversal(root);
    return 0;
}