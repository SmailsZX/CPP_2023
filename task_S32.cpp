#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Введите строку: ";
    cin.getline(str, 100);
    
    char *part = str;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if ((*part >= 'a' && *part < 'z') || (*part >= 'A' && *part < 'Z')) {
            (*part)++;
        } else if (*part == 'z') {
            *part = 'a';
        } else if (*part == 'Z') {
            *part = 'A';
        }
        part++;
    }
    
    cout << "Результат: " << str << endl;
    
    return 0;
}