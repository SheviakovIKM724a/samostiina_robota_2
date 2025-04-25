#include <iostream>
using namespace std;

// Функція для обчислення суми двох чисел
int add(int a, int b) {
    return a + b;
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int x, y;

    // Ввід чисел з консолі
    cout << "Введіть перше число: ";
    cin >> x;

    cout << "Введіть друге число: ";
    cin >> y;

    // Виклик функції та виведення результату
    cout << "Сума: " << add(x, y) << endl;

    return 0;
}
