#include <iostream>
using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m;
    m /= 2;
    c = m - n;
    cout << n - c << " " << c << endl;
    return 0;
}