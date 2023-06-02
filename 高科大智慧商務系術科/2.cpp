#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int gender;
    double h,w;
    while (cin >> h >> gender) {
        if (gender == 1) {
                w = (h - 80) * 0.7;
                cout << fixed << setprecision(1) << w << endl;
        }
        if (gender == 2) {
                w = (h - 70) * 0.6;
                cout << fixed << setprecision(1) << w << endl;
        }
    }
    return 0;
}