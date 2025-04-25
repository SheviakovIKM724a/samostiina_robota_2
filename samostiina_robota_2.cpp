#include <iostream>
using namespace std;

// Функція для обчислення факторіалу
int factorial(int n) {
    if (n < 0) {
        cout << "Факторіал визначений лише для невід’ємних чисел." << endl;
        return 0;
    }

    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Приклад використання
int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int number;
    cout << "Введіть число: ";
    cin >> number;

    int fact = factorial(number);
    cout << "Факторіал " << number << " = " << fact << endl;

    return 0;
}
