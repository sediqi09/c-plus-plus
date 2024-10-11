#include <iostream>

int* add(int arr[], int x, int pos, int size) {
    int* newArr = new int[size + 1];

    for (int i = 0; i < pos; ++i) {
        newArr[i] = arr[i];
    }

    newArr[pos] = x;

    for (int i = pos; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }

    return newArr; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 9;
    int pos = 3;

    int* newArr = add(arr, x, pos, size);
    
    for (int i = 0; i < size + 1; ++i) {
        std::cout << newArr[i] << " ";
    }

    return 0;
}