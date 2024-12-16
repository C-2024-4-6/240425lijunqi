#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int a = 10;
    double numbers[a];
    int count = 0; 

    cout << "请输入10个数字：" << endl;
    for (int i = 0; i < a; ++i) {
        double num;
        cin >> num;
        bool b = true;
        for (int j = 0; j < count; ++j) {
            if (numbers[j] == num) {
                b = false; 
                break;
            }
        }
        if (b) { 
            numbers[count] = num; 
            count++; 
        }
    }

    cout << "不同的数字为：" << endl;
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}