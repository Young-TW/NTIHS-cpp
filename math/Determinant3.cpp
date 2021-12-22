#include <iostream>
using namespace std;

void Determinant(){
    int a[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "輸入第" << i+1 << "行 " << "第" << j+1 << "列: ";
            cin >> a[i][j];
        }
    }

    int ans = 
    a[0][0] * a[1][1] * a[2][2] +
    a[1][0] * a[2][1] * a[0][2] +
    a[2][0] * a[0][1] * a[1][2] -
    a[0][2] * a[1][1] * a[2][0] -
    a[0][1] * a[1][0] * a[2][2] -
    a[0][0] * a[1][2] * a[2][1];

    cout << "答案是" << ans;
}

int main() {
    Determinant();
    return 0;
}