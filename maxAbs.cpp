#include <iostream>
#include <cmath>

int maxAbs(int arr[], int size) {
    int maxAbsValue = 0;

    for (int i = 0; i < size; ++i) {
        int absValue = std::abs(arr[i]);
        if (absValue > maxAbsValue) {
            maxAbsValue = absValue;
        }
    }
    return maxAbsValue;

}

int main() {
    int arr[] = {1, -2, -7, 4, 2, 2, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = maxAbs(arr, size);
    
    std::cout << "The largest absolute value is: " << result << std::endl;
    return 0;
}
















