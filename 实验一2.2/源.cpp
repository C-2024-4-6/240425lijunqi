#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	double a, b = 0;
	cout << "请分别输入圆锥的底面半径" << endl;
		cin >>a ;
		cout << "请分别输入圆锥的高" << endl;
		cin >> b; 
		cout << "圆锥的体积为 " << a * a * b * PI / 3;
	return 0;
}