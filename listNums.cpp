#include <iostream>
#include <string>

std::string listNums(int x) {
    std::string result;
    
    for (int i = 0; i <= x; ++i) {
        result += std::to_string(i);  // Convert integer to string and append
        if (i < x) {
            result += " ";  // Add space if it's not the last number
        }
    }
    
    return result;
}

int main() {
    std::cout << "listNums(5): " << listNums(5) << std::endl;
    std::cout << "listNums(3): " << listNums(3) << std::endl;
    std::cout << "listNums(10): " << listNums(10) << std::endl;
    return 0;
}
