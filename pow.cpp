#include <iostream>

int pow (int x, int y) {
    int result = 1;
    for (int i = y; i > 0; --i) {
        result *= x;
    }
    return result;

}

int main() {
    std::cout << "Powe (2, 5): " << pow(2, 5) << std::endl;
    std::cout << "Powe (3, 3): " << pow(3, 3) << std::endl;
    return 0;
}