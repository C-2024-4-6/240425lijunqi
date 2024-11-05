#include <iostream>  
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);
int main() {
    int a, b;
    cout << "���������������� a �� b: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "�������������Ϊ������" << endl;
        return 1;
    }

    int d = gcd(a, b);
    int e = lcm(a, b);
    cout << "���Լ�� (GCD): " << d << endl;
    cout << "��С������ (LCM): " << e << endl;
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}