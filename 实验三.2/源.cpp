/*
2.   ��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num), ���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������*/
#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int a;
	for (int i = 2; i < num; i++)
	{
		a = num / i;
		if (num == a * i)
		{
			return false;
		}

	}
	return true;
}
int main()
{
	int a = 2;
	int b = 1;
	for (int i = 0; i <200; a++)
	{
		if (is_prime(a) == true)
		{
			cout << a << " ";
			i++;
			if (i % 10 == 0)
			{
				cout << '\n';
			}
		}
	}
	return 0;
}
