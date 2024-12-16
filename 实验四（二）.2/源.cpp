#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int aaa(const char* const a) {
    int len = strlen(a);
    int result = 0;
    for (int i = 0; i < len; i++) {
        char ch = a[i];
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }
        else {
            return -1;
        }
        result = result * 16 + digit;
    }
    return result;
}

int main() {
    char a[100];
    cout << "������ʮ��������: ";
    cin.getline(a, 100);

    int b = aaa(a);
    if (b != -1) {
        cout << "ת�����ʮ������Ϊ: " << b << endl;
    }
    else {
        cout << "�����ʮ����������ʽ����" << endl;
    }

    return 0;
}