#include <iostream>

using namespace std;

bool isPrime(int num) {
    // Відкидаємо всі числа менші або рівні 1
    if (num <= 1) {
        return false;
    }

    
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; // Якщо жоден дільник не знайдений, то число просте
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int num;
    cout << "Введіть ціле число: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " є простим числом." << endl;
    }
    else {
        cout << num << " не є простим числом." << endl;
    }

    return 0;
}
