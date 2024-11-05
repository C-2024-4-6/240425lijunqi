#include <iostream>
using namespace std;

int main()
{
    int a = 0;  // 英文字母
    int b = 0;   // 空格
    int d = 0;   // 数字
    int e = 0;   // 其他字符
    char c;
    cin.get(c);  // 从键盘读入一个字符

    while (c != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            a++;
        }
        else if (c == ' ') {
            b++;
        }
        else if (c >= '0' && c <= '9') {
            d++;
        }
        else {
            e++;
        }
        cin.get(c);
    }
    cout << "英文字母的个数: " << a << endl;
    cout << "空格的个数: " << b << endl;
    cout << "数字字符的个数: " << d << endl;
    cout << "其他字符的个数: " << e << endl;

    return 0;
}