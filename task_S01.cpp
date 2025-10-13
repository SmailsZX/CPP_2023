#include <iostream>
using namespace std;

int main() {
    // Создаем 4 переменные разных типов
    int a = 88;
    double b = 2.4;
    float c = 6.4f;
    short d = 2;
   
    cout << "Исходные переменные:" << endl;
    cout << "целоеЧисло = " << a << endl;
    cout << "дробноеЧисло = " << b << endl;
    cout << "числоFloat = " << c << endl;
    cout << "короткоеЧисло = " << d << endl;
    cout << "1. СЛОЖЕНИЕ (+):" << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << c << " + " << d << " = " << c + d << endl;
    cout << "2. ВЫЧИТАНИЕ (-):" << endl;
    cout << a << " - " << b << " = " << a - b << endl; 
    cout << c << " - " << d << " = " << c - d << endl;     
    cout << "3. УМНОЖЕНИЕ (*):" << endl;
    cout << a << " * " << b << " = " << a * b << endl; 
    cout << c << " * " << d << " = " << c * d << endl; 
    cout << "4. ДЕЛЕНИЕ (/):" << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << c << " / " << d << " = " << c / d << endl;
       
    
    
    return 0;
}
