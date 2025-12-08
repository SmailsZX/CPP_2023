#include <iostream>
using namespace std;

// 1. Для одного целого числа
void print(int a) {
    cout << a << endl;
}

// 2. Для одного вещественного числа
void print(float a) {
    cout << a << endl;
}

// 3. Для одного символа
void print(char a) {
    cout << a << endl;
}

// 4. Для двух целых чисел
void print(int a, int b) {
    cout << a << ", " << b << endl;
}

int main() {
    // Тестируем все функции
    print(10);          // Выводит: 10
    print(3.14f);       // Выводит: 3.14
    print('A');         // Выводит: A
    print(5, 10);       // Выводит: 5, 10
    
    return 0;
}