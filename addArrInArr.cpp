#include <iostream>

int* add(int arr[], int arrSize, int ins[], int insSize, int pos) {
    int* newArr = new int[arrSize + insSize];

    for (int i = 0; i < pos; i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < insSize; i++) {
        newArr[pos + i] = ins[i];
    }

    for (int i = pos; i < arrSize; i++) {
        newArr[insSize + i] = arr[i];
    }

    return newArr;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int ins[] = {7, 8, 9};
    int pos = 3;

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int insSize = sizeof(ins) / sizeof(ins[0]);

    int* newArr = add(arr, arrSize, ins, insSize, pos);

    std::cout << "New array: [";
    for (int i = 0; i < arrSize + insSize; i++) {
        std::cout << newArr[i];
        if (i < arrSize + insSize - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
