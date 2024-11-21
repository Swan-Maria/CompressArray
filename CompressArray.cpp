#include <iostream>
#include <time.h>
#include <Windows.h>
const int size = 20;
void creatArray(int* arr);
void printArray(int* arr);
void compressArray(int* arr);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int arr[size];
    creatArray(arr);
    std::cout << "До сжатия:    ";
    printArray(arr);
    compressArray(arr);
    std::cout << "После сжатия: ";
    printArray(arr);
    return 0;
}

void creatArray(int* arr) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % size + 1;
    }
}
void printArray(int* arr) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}
void compressArray(int* arr) {
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