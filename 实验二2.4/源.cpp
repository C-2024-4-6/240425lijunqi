#include <iostream>  
using namespace std;
int main() {
    double num1, num2;
    char operation;
    cout << "�������һ������: ";
    cin >> num1;
    cout << "����������� (+, -, *, /, %): ";
    cin >> operation;
    cout << "������ڶ�������: ";
    cin >> num2;
    double result;
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "���: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "���: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "���: " << result << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "���󣺳�������Ϊ 0��" << endl;
        }
        else {
            result = num1 / num2;
            cout << "���: " << result << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "���󣺳�������Ϊ 0��" << endl;
        }
        else {
            int a = static_cast<int>(num1);
            int b = static_cast<int>(num2);
            result = a % b;
            cout << "���: " << result << endl;
        }
        break;
    default:
        cout << "����" << endl;
        break;
    }
    return 0;
}