/*
2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：*/
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
