/*
 *作者:王晨洋 
 *日期:2021/7/2 
 *題目:紫外線指數 
 */
#include <iostream>
using namespace std;
int main(){
	int t[5];
	int sum = 0;
	for (int i=1; i<6; i++) {
		cout << "輸入星期" << i << "的紫外線指數: ";
		cin >> t[i];
		cout << endl;
		sum = sum + t[i];
	}
	sum = sum/5;
	int min;
	int max = min = t[0];
    for (int i=1; i<6; i++) {
        if (t[i] > max)
            max = t[i];
		if (t[i] < max)
			min = t[i];
	}
	
    cout << "最大值: " << max << "\n";
	cout << "最小值: " << min << "\n";
    cout << "平均值: " << sum << "\n";
	return 0;
}
