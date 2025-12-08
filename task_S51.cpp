#include <iostream>
using namespace std;

void reverse(char txt[]) {
    int len = 0;
    while (txt[len] != '\0') len++;
    
    for (int i = len - 1; i >= 0; i--) {
        cout << txt[i];
    }
    cout << endl;
}

int main() {
    char word[] = "Testing";
    reverse(word);  
    return 0;
}