#include <iostream>
using namespace std;
void merge(const int arr1[], int a, const int arr2[], int b, int arr3[]) {
    int i = 0, j = 0, k = 0;
    while (i < a && j < b) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < a) {
        arr3[k++] = arr1[i++];
    }
    while (j < b) {
        arr3[k++] = arr2[j++];
    }
}
int main() {
    const int a = 80;
    int arr1[a]{}, arr2[a]{}, arr3[a]{};
    int c, d;
    cout << "�������һ�������������Ԫ�ظ�����";
    cin >> c;
    cout << "�������һ�������������Ԫ�أ�";
    for (int i = 0; i < c; ++i) {
        cin >> arr1[i];
    }
    cout << "������ڶ��������������Ԫ�ظ�����";
    cin >> d;
    cout << "������ڶ��������������Ԫ�أ�";
    for (int i = 0; i < d; ++i) {
        cin >> arr2[i];
    }
    merge(arr1, c, arr2, d, arr3);

    cout << "�ϲ��������Ϊ��";
    for (int i = 0; i < c + d; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}