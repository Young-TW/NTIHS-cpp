/*
 *題目: 幾場華山論劍
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 5/23
 */

#include <bits/stdc++.h>
using namespace std;
#define N 100010
struct ACT {
    int s,f; // start and finish time
};
// compare finish time
bool cmp(ACT p, ACT q) {
    return p.f<q.f;
}
int main() {
    int n;
    ACT ac[N];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> ac[i].s >> ac[i].f;
    sort(ac, ac+n, cmp); // sort from small to large
    int endtime=-1, total=0;
    cout << "可以參加的場次有: \n";
    for (int i=0; i<n; i++) {
        if (ac[i].s>endtime) { // compatible
            cout << "[" << ac[i].s << "~" << ac[i].f << "] ";
            total++;
            endtime=ac[i].f;
        }
    }
    cout << "共 " << total << " 場次";
    return 0;
}

// done