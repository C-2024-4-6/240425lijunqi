/*1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
 Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò���)
*/
#include<iostream>
using namespace std;
int gcd(int m, int n)
{
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int m, n;
    cout << "�����룺";
	cin >> m >> n;
    cout << "���Լ����" << gcd(m, n) << '\n';
    cout << "��С��������" << lcm(m, n);
	return 0;
}