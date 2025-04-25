#include <iostream>

using namespace std;

int getStringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    char input[1000];
    cin.getline(input, 1000);
    cout << getStringLength(input) << endl;
    return 0;
}
