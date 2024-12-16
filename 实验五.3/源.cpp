#include <iostream>
using namespace std;
class Cuboid {
private:
    double length; 
    double width; 
    double height; 
public:
    void input() {
        cout << "请输入长方体的长：";
        cin >> length;
        cout << "请输入长方体的宽：";
        cin >> width;
        cout << "请输入长方体的高：";
        cin >> height;
    }
    double volume() {
        return length * width * height;
    }
    void output() {
        cout << "该长方体的体积为：" << volume() << endl;
    }
};

int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        cout << "请输入第" << (i + 1) << "个长方柱的尺寸：" << endl;
        cuboids[i].input();
    }

    for (int i = 0; i < 3; i++) {
        cout << "第" << (i + 1) << "个长方柱：";
        cuboids[i].output();
    }

    return 0;
}