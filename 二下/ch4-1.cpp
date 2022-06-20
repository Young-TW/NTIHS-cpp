/*
 *題目: 少林寺的代幣
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 5/9
 */

#include <cstdio>
int main() {
    int coin[4]= {1,5,10,50};
    int m,n;
    scanf("%d",&m); // 測資數量
    for (int i=0; i<m; i++) {
        scanf("%d", &n); // 輸入錢的數字
        int coinCount;
        int num=0; // 錢index
        for (int j=3; j>=0 && n>0; j--) { // large to small
            coinCount = n/coin[j]; // num of coin[j]
            printf("%d元%d個 ",coin[j],coinCount);
            num += coinCount;
            n %= coin[j]; // remaining 餘數
        }
        printf("共%d個\n",num);
    }
    return 0;
}

// done