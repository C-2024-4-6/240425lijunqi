 #include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int a = 100;
    bool arr[a];
    for (int i = 0; i < a; ++i) {
        arr[i] = false;
    }
    for (int c = 1; c <= a; ++c) {
        for (int d = c - 1; d < a; d += c) {
            arr[d] =!arr[d];
        }
    }
    cout << "开着的存物柜号码为：";
    for (int i = 0; i < a; ++i) {
        if (arr[i]) {
            cout << setw(3) << (i + 1) << " ";
        }
    }
    cout << endl;

    return 0;
}