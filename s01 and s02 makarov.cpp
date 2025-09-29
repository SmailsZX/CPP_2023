#include <iostream>
using namespace std;

int main() {
    // Создаем 4 переменные разных типов
    int a = 15;
    double b = 7.5;
    float c = 3.2f;
    short d = 4;
    int f=34;
    int g=4;
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
    cout << "5. ДЕЛЕНИЕ (нацело и с остатком):" << endl;
    cout << f << " / " << g << " = " << f / g << endl;        
    cout << f << " % " << g << " = " << f % g << endl;        
    
    return 0;
    return 0;
}