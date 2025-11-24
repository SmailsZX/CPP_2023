#include <iostream>
using namespace std;

int main() {
    string numbers[10] = {"ноль", "один", "два", "три", "четыре", "пять", 
                         "шесть", "семь", "восемь", "девять"};
    
    int n;
    cout << "Введите число от 0 до 9: ";
    cin >> n;
    
    if (n >= 0 && n <= 9) {
        cout << numbers[n] << endl;
    } else {
        cout << "Неверное число!" << endl;
    }
    
    return 0;
}