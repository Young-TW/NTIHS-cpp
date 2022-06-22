/*
 *題目: 十年磨一劍
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 5/23
 */

#include <bits/stdc++.h>
using namespace std;
#define N 100010

int main() {
    int n, job[N];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> job[i];
    sort(job, job+n); // sort from small to large
    
    long long int comp=0, total=0, total2=0;
    for (int i=0; i<n; i++) {
        comp += job[i]; // completion time of i
        total += comp; // total completion time
    }
    comp=0;
    for (int i=n-1; i>=0; i--) {
        comp += job[i]; // completion time of i
        total2 += comp; // total completion time
    }
    cout << "最短完成時間 " << total << endl;
    cout << "最長完成時間 " << total2 << endl;
    return 0;
}

// done