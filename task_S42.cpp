#include <iostream>
using namespace std;

void sort(int nums[10]) {
    // Просто сравниваем и меняем все пары
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (nums[i] < nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    
    sort(a);
    
    // Выводим результат
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}