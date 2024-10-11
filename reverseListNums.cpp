#include <iostream>
#include <string>

std::string reverseListNums(int x) {
    std::string result;
    
    for (int i = x; i >= 0; --i) {
        result += std::to_string(i);
        if (i > 0) {
            result += " ";
        }
       
    }
    
    return result;
}

int main() {
    std::cout << "reverseListNums (5): " << reverseListNums(5) << std::endl;
    std::cout << "reverseListNums (3): " << reverseListNums(3) << std::endl;
    std::cout << "reverseListNums (10): " << reverseListNums(10) << std::endl;
    return 0;
}
