/*
 *�@��:����v 
 *���:2021/7/2 
 *�D��:���~�u���� 
 */
#include <iostream>
using namespace std;
int main(){
	int t[5];
	int sum = 0;
	for (int i=1; i<6; i++) {
		cout << "��J�P��" << i << "�����~�u����: ";
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
	
    cout << "�̤j��: " << max << "\n";
	cout << "�̤p��: " << min << "\n";
    cout << "������: " << sum << "\n";
	return 0;
}
