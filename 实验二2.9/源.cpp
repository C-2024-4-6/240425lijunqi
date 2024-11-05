#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int n = 1;
    for (int i = 2; ; i *= 2) {
        if (i > 100)
            break;
        sum += i * 0.8;
        n++;
    }
    cout << sum / n;
}
