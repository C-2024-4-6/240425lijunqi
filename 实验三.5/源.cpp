/*5�����ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ��
�Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ��ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���*/
#include<iostream>
using namespace std;
int beach(int day)
{
    if (day == 10)
        return 1; 
    else
        return (beach(day + 1) + 1) * 2;
}
int main()
{
	cout << beach(1);
	return 0;
}
