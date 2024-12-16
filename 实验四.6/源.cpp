#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }

    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; ++i) {
        char ch = tolower(s[i]);
        if (isalpha(ch)) {
            counts[ch - 'a']++;
        }
    }
}
int main() {
    const int a = 100;
    char s[a];
    int counts[26];
    cout << "请输入一个字符串：";
    cin.getline(s, a);
    count(s, counts);
    cout << "字符串中各字母出现的次数如下：" << endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            char ch = 'a' + i;
            cout << ch << ": " << counts[i] << endl;
        }
    }

    return 0;
}