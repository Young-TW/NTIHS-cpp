#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    int y1, y2, y3, y4;
    cin >> y;
    y1 = y/1000;
    y2 = (y%1000)/100;
    y3 = (y%100)/10;
    y4 = y%10;
    vector<int> ans = {0, 7, 4, 1, 8, 5, 2, 9, 6, 3};
    x = ans[y1] * 1000 + ans[y2] * 100 + ans[y3] * 10 + ans[y4];
    cout << x << endl;
    return 0;
}