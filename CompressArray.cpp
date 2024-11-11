#include <iostream>
#include <time.h>
#include <Windows.h>

void compressArray(int* arr, int size);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 20;

    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 20 + 1;
    }

    std::cout << "До сжатия:    ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;

    compressArray(arr, size);

    std::cout << "После сжатия: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;

    return 0;
}

void compressArray(int* arr, int size) {
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (abs(arr[i]) > 10) {
            arr[index++] = arr[i];
        }
    }

    for (int i = index; i < size; ++i) {
        arr[i] = 0;
    }
}