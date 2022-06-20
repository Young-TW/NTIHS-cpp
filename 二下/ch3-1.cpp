/*
 *題目: APCS 樹狀圖分析
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 3/7
 */

#include <bits/stdc++.h>
using namespace std;
#define N 100010
int main() {
    int parent[N]= {0}; // parent of node i
    int h[N]= {0}; // height of node i
    int deg[N]; // num of children
    int n, i, j, ch;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        scanf("%d", &deg[i]); // num of children
        for (j=0; j<deg[i]; j++) {
            scanf("%d", &ch);
            parent[ch] = i; // set parent
        }
    }
    int root;
    for (root=1; root<=n; root++)
        if (parent[root]==0) break; // no parent
    printf("%d\n", root);
    long long step=0;
    for (i=1; i<=n; i++) { // for each
        int cnt=0; // num of step from i
        // go up until root
        for (j=i; j!=0; j=parent[j]) {
            h[j]=max(h[j],cnt);
            cnt++;
            step++;
        }
    }
    long long total=0;
    for (i=1; i<=n; i++)
        total += h[i];
    printf("%lld\n",total);
    fprintf(stderr," %lld steps, ans=%lld\n", step, total);
    return 0;
}

// 未完成