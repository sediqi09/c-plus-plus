#include <iostream>

int findLast(int arr[], int size, int x) {
    for (int i = size - 1; i >= 0; --i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5};
    int x = 2;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int result = findLast(arr, size, x); // Call the function
    if (result != -1) {
        std::cout << "The Last occurrence of " << x << " is at index: " << result << std::endl;
    } else {
        std::cout << x << " is not in the array." << std::endl;
    }

    return 0;
}