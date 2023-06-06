#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] > '0' && str[i] <= '9') {
            str[i] = '0';
        }

        if (str[i] > 'a' && str[i] <= 'z') {
            str[i] += 'A' - 'a';
        }
    }

    cout << str << endl;
    return 0;
}