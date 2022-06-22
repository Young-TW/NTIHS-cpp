/*
 *題目: 一次買賣
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 6/13
 */

#include <bits/stdc++.h>
using namespace std;
#define oo 1000001
int main() {
    int n, max_diff=0; // allow zero
    int p_min=oo; // prefix minimum
    cin >> n;
    int flag;
    for (int i=0; i<n; i++) {
        int p;
        cin >> p;
        if(p-p_min>max_diff)
            flag = p_min;
        max_diff = max(max_diff, p - p_min);
        p_min = min(p_min, p);
    }
    cout << "買與賣的最大利差組合為 " << flag << " " << flag+max_diff << endl;
    cout << "最大利差結果為 " << max_diff << endl;
    return 0;
}

// done