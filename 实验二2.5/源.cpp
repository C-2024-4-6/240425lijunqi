#include <iostream>
using namespace std;

int main()
{
    int a = 0;  // Ӣ����ĸ
    int b = 0;   // �ո�
    int d = 0;   // ����
    int e = 0;   // �����ַ�
    char c;
    cin.get(c);  // �Ӽ��̶���һ���ַ�

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
    cout << "Ӣ����ĸ�ĸ���: " << a << endl;
    cout << "�ո�ĸ���: " << b << endl;
    cout << "�����ַ��ĸ���: " << d << endl;
    cout << "�����ַ��ĸ���: " << e << endl;

    return 0;
}