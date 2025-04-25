#include <iostream>
using namespace std;

// Функція для обчислення площі прямокутника
double area(double length, double width) {
    return length * width; // Площа = довжина * ширина
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    double l, w;

    // Введення сторін прямокутника
    cout << "Введіть довжину прямокутника: ";
    cin >> l;

    cout << "Введіть ширину прямокутника: ";
    cin >> w;

    // Виклик функції для обчислення площі
    double a = area(l, w);

    // Виведення результату
    cout << "Площа прямокутника: " << a << endl;

    return 0;
}
