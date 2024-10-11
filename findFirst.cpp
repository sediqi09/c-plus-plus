#include <iostream>

int findFirst(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
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

    int result = findFirst(arr, size, x); // Call the function
    if (result != -1) {
        std::cout << "The first occurrence of " << x << " is at index: " << result << std::endl;
    } else {
        std::cout << x << " is not in the array." << std::endl;
    }

    return 0;
}