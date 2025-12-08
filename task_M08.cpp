#include <iostream>
#include <cmath>
using namespace std;

double get_angle(double a, double b, double c) {
    // Простые проверки
    if (a <= 0 || b <= 0 || c <= 0) return 0;
    if (a >= b + c) return 0;
    
    // Вычисление угла
    double cosA = (b*b + c*c - a*a) / (2*b*c);
    return acos(cosA) * 180.0 / 3.14159265;
}

int main() {
    // Угол напротив гипотенузы в прямоугольном треугольнике
    cout << get_angle(5, 3, 4) << "°" << endl;  // ≈90°
    
    // Угол в равностороннем треугольнике
    cout << get_angle(1, 1, 1) << "°" << endl;  // 60°
    
    return 0;
}