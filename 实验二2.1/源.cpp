#include <iostream>
using namespace std;

int main() {
    char i;
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
    cin >> i;
    if (i >= 'a' && i <= 'z') {
        cout << static_cast<char>(i - 32);
    }
    else {
        cout << static_cast<int>(i + 1);
    }
    return 0;
}

