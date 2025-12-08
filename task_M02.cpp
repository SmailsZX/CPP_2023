#include <iostream>
#include <cmath>
using namespace std;

double get_square(double A, int N) {
    double pi = 3.14159;
    return (N * A * A) / (4 * tan(pi / N));
}

int main() {
    // Примеры использования
    cout << get_square(1, 3) << endl;  // площадь треугольника
    cout << get_square(1, 4) << endl;  // площадь квадрата
    cout << get_square(1, 5) << endl;  // площадь пятиугольника
    
    return 0;
}