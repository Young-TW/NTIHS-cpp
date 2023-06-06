#include <iostream>
#include <vector>
using namespace std;

vector<int> add(vector<int> a, vector<int> b) {
    vector<int> c;
    for (int i = 0; i < a.size(); i++) {
        c.push_back(a[i] + b[i]);
    }
    return c;
}

int main() {
    vector<int> a, b;
    for (int i = 0; i < 9; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < 9; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    vector<int> c = add(a, b);

    for (int i = 0; i < 9; i++) {
        cout << c[i] << " ";
        if (i % 3 == 2) {
            cout << endl;
        }
    }
    return 0;
}