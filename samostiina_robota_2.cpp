#include <iostream>
using namespace std;

// Функція для сортування масиву за зростанням
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Міняємо місцями елементи
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Функція для виведення масиву
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int arr[] = { 5, 3, 8, 1, 2 };
    int size = 5;  // Явно вказуємо розмір масиву

    cout << "Масив до сортування: ";
    printArray(arr, size);

    sortArray(arr, size);

    cout << "Масив після сортування: ";
    printArray(arr, size);

    return 0;
}
