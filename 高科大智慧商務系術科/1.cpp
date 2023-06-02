#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int ans;

    while(cin >> n) {
        ans = 1;
        i = 2;
        while (i < n) {
            if (n%i == 0) {
                ans = 0;
            }
            i = i+1;
        }

        if (ans == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}