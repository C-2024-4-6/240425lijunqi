/*5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天又将剩下的桃子吃掉一半，又多吃一个
以后每天如此，到第10天，发现只剩最后一个桃子，问，第一天猴子共摘多少桃子（用递归实现）。*/
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
