#include <iostream>
#include <string>

std::string chet(int x) {
    std::string result;

    for (int i = 0; i <= x; i += 2) {
        result += std::to_string (i);
        result += " ";

    }
    return result;
}

int main() {
    std::cout << "Chet (9): " << chet(9) << std::endl;
    std::cout << "Chet (2): " << chet(2) << std::endl;
    std::cout << "Chet (10): " << chet(10) << std::endl;
    return 0;
}