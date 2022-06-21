/*
 *題目: 最多色彩帶
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 4/25
 */

#include<bits/stdc++.h>
using namespace std;
#define N 200010
int seq[N], cnt[N]= {0}; // counter of color i

// int colorCount(array[]){
//     return
// }

int main() {
    int n,L,i;
    cin >> n >> L; // 彩帶長度n 視窗長度L
    int n_color=0;
    for (i=0; i<n; i++) 
        cin >> seq[i]; // 完整彩帶seq[] 彩帶單格index seq[i]
    // initial window
    for (i=0; i<L; i++) {
        int color=seq[i]; // 設定彩帶單格index顏色為 color
        cnt[color]++; // 目前彩帶視窗index cnt[]
        if (cnt[color]==1) n_color++; // 第一個視窗顏色數量 n_color
    }
    cout << "以 0 為首，取 " << L << " 共有顏色 " << n_color << " 種\n";
    int ans=n_color, left;

    // sliding window, seq[i] in, seq[left] out
    for (left=0,i=L; i<n; i++,left++) {
        int color=seq[i]; // 設定彩帶單格index顏色為 color
        cnt[color]++; // 目前彩帶視窗index cnt[]
        if (cnt[color]==1) n_color++; // 視窗顏色數量 n_color
        color=seq[left];
        cnt[color]--;
        if (cnt[color]==0) n_color--; // 重複時顏色數量-1
        cout << "以 " << i-L+1 << " 為首，取 " << L << " 共有顏色 " << ans << " 種\n";
        ans=max(ans,n_color); // 覆蓋最高顏色數量
    }
    cout << "最多色彩共 " << ans << " 種";
    return 0;
}

// 未完成