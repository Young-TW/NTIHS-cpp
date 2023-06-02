#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a + b > c && a + c > b && b + c > a) {
            cout << "fit" << endl;
        } else {
            cout << "unfit" << endl;
        }
    }

    return 0;
}