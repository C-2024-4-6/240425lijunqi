#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a = 1;
	cout << "请输入华氏温度" << endl;
	cin >> a;
	cout << "对应的摄氏温度是:";
	cout << (a - 32) / 1.8;
	return 0;
}