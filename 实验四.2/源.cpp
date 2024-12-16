#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 1,3,8,6,4,0,7,2,5, };//如何将数组从大到小进行排序
	cout << "排序前:";
	for (int a = 0; a < 9; a++)
	{
		cout << arr[a] << endl;
	}
	for (int i = 0; i < 9 - 1; i++)//开始排序，排序的方法为：前两个数中，如果前一个数比后一个数大，则互换他们的位置
		//一共进行八轮，每一轮都把最大的数放在最后面
	{
		for (int j = 0; j < 9 - i - 1; j++)//17
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后:";
	for (int b = 0; b < 9; b++)
	{
		cout << arr[b] << endl;
	}
}