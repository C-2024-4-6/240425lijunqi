#include<iostream>
using namespace std;
int main()
{
	int a;
	if (0 < a && a < 1)
	{
		cout<<"y="<<3-2*a;
	}
	if (1 <= a && a < 5)
	{
		cout << "y=" << 2/a/4+1;
	}if (5 <=a && a < 10)
	{
		cout << "y=" << a*a;
	}
	return 0;
}