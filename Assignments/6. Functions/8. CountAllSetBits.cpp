#include <iostream>

int countSetBits(int n) {
    int count = 0;
    
    while (n > 0) {
        count += n & 1;
        n >>= 1; // Shift the number to the right by 1 bit
    }
    
    return count;
}

int main() {
    int number;
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    int result = countSetBits(number);
    
    std::cout << "Number of set bits: " << result << std::endl;
    
    return 0;
}
