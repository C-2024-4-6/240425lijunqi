#include <iostream>  
#include <cmath>  
using namespace std;

int main() {
    double a;
    cout << "������һ���Ǹ��� a: ";
    cin >> a;
    if (a < 0) {
        cout << "�����ǷǸ�����" << endl;
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
    cout << "ƽ����: " << c << endl;
    return 0;
}