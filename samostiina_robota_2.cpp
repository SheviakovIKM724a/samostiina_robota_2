#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int arr[] = { 1, 2, 3, 4, 5 };
    cout << "Сума елементів масиву: " << sumArray(arr, 5) << endl;
    return 0;
}
