#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (i % 7 == 2 && i % 9 == 2 && i % 3 == 2) {
            cout << i << endl;
        }
    }
    return 0;
}