#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 1,3,8,6,4,0,7,2,5, };//��ν�����Ӵ�С��������
	cout << "����ǰ:";
	for (int a = 0; a < 9; a++)
	{
		cout << arr[a] << endl;
	}
	for (int i = 0; i < 9 - 1; i++)//��ʼ��������ķ���Ϊ��ǰ�������У����ǰһ�����Ⱥ�һ�������򻥻����ǵ�λ��
		//һ�����а��֣�ÿһ�ֶ������������������
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
	cout << "�����:";
	for (int b = 0; b < 9; b++)
	{
		cout << arr[b] << endl;
	}
}