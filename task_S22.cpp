#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("output.txt");
    int number;
    int n = 1;
    
    while (file >> number) {
        cout << n << ". " << number << endl;
        n++;
    }
    
    file.close();
    return 0;
}