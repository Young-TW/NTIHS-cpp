#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x*x + y*y <= 100*100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
    return 0;
}