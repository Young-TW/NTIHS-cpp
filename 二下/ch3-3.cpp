/*
 *題目: 最接近的高人
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 3/14
 */

#include <bits/stdc++.h>
using namespace std;
#define N 300010
#define oo 10000001
int a[N];
stack<int> S; // for index
int main() {
    int i,n;
    long long total=0; // total distance
    scanf("%d",&n);
    S.push(0);
    a[0]=oo;
    for (i=1; i<=n; i++) {
        scanf("%d",&a[i]);
    }
    cout << "每個位置，與前面高人的距離:\n";
    for (i=1; i<=n; i++) {
        while (a[S.top()] <= a[i])
            S.pop();
        cout << "(" << i << "): " << i - S.top() << endl;
        total += i - S.top();
        S.push(i);
    }
    cout << "總距離 = " << total;
    return 0;
}

// done