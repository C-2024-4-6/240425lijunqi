#include <iostream>  
#include <cmath>  
using namespace std;

int main() {
    double a;
    cout << "请输入一个非负数 a: ";
    cin >> a;
    if (a < 0) {
        cout << "必须是非负数。" << endl;
        return 1;
    }
    double b = a;
    double c;
    do {
        c = 0.5 * (b + a / b);
        if (fabs(c - b) < 1e-5)
            break;
        b = c;
    } while (true);
    cout << "平方根: " << c << endl;
    return 0;
}