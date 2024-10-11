#include <iostream>

int numLen (long x) {
    if (x < 0) {
        x = -x;
    }
    
    if (x == 0) {
        return 1;
    }

    int count = 0;
    while (x > 0) {
        x /= 10;
        count++;
    }
    return count;

}

int main() {
    std::cout << "numLen (214425): " << numLen (214425) <<std::endl;
    std::cout << "numLen (-47322): " << numLen (-47322) << std:: endl;
    std::cout << "numLen (521): " << numLen(521) << std::endl;
}