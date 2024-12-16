#include <iostream>
#include "student.h" 
using namespace std;
void Student::display()
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    strcpy(name, nm);
    sex = s;
}
int main()
{
    Student stud;
    Student stud1;
    stud1.set_value(007, "tcg", 'm');  // 调用set_value函数给stud1对象的数据成员赋初值

    stud.display();
    stud1.display();

    return 0;
}