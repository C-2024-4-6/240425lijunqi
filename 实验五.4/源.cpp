#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string id;
    int score;
};
void max(Student* students, int size) {
    if (size <= 0) {
        cout << "�����ѧ����������ȷ" << endl;
        return;
    }
    Student* maxStudent = &students[0];
    for (int i = 1; i < size; i++) {
        if (students[i].score > maxStudent->score) {
            maxStudent = &students[i];
        }
    }
    cout << "�ɼ���ߵ�ѧ��ѧ��Ϊ��" << maxStudent->id << endl;
}

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "�������" << (i + 1) << "��ѧ����ѧ�ţ�";
        cin >> students[i].id;
        cout << "�������" << (i + 1) << "��ѧ���ĳɼ���";
        cin >> students[i].score;
    }
    max(students, 5);

    return 0;
}