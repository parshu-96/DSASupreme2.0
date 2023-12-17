#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int d;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->d = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// It returns root node of created tree
Node *createTree()
{
    cout << "Enter the value :" << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // Step 1 Create Node
    Node *root = new Node(data);

    // Step 2 Create left Subtree
    // cout<<"For Left of Node "<<data<<endl;
    root->left = createTree();

    // Step 3 Create right Subtree
    // cout<<"For right of Node "<<data<<endl;
    root->right = createTree();

    return root;
}

void preOrderTraversal(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // NLR
    // N
    cout << root->d << " ";
    // Left
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LNR
    // L
    inorderTraversal(root->left);
    // N
    cout << root->d << " ";
    // R
    inorderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LRN
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout << root->d << " ";
}

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    //Yaha Fasoge
    while (q.size()>1)
    {
        Node *temp = q.front();
        q.pop();
        if (temp==NULL)
        {
            cout << endl;
            q.push(NULL);
        }
        else
        {
            cout << temp->d << " ";
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

int main()
{
    Node *root = createTree();
    // 10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1
    cout << "Root Node :" << root->d << endl;
    cout << "Inorder Traversal :";
    inorderTraversal(root);
    cout << endl;
    cout << "Preorder Traversal :";
    preOrderTraversal(root);
    cout << endl;
    cout << "Postrder Traversal :";
    postOrderTraversal(root);
    cout << endl;
    cout << "Level Order Traversal :";
    LevelOrderTraversal(root);
    return 0;
}