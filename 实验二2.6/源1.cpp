#include <iostream>  
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);
int main() {
    int a, b;
    cout << "请输入两个正整数 a 和 b: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "输入的整数必须为正数。" << endl;
        return 1;
    }

    int d = gcd(a, b);
    int e = lcm(a, b);
    cout << "最大公约数 (GCD): " << d << endl;
    cout << "最小公倍数 (LCM): " << e << endl;
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