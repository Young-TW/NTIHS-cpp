/*
 *�@��:����v 
 *���:2021/7/2 
 *�D��:��T���α���M���� 
 */
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	while(1){
		int x = 1;
		int y = 1;
		cout << "��Jx: " << endl;
		cin >> x;
		if(x==0 || y==0){
			return 0;
		}
		cout << "��Jy: " << endl;
		cin >> y;
		double atan = atan2(y,x);
		atan = atan*180/3.14;
		cout << "����: " << atan; 
		x = x*x;
		y = y*y;
		double z = x+y;
		z = sqrt(z);
		cout << "����: " << z << endl; 
		cout << "��J0�����{��" << endl;
		if(x==0 || y==0){
			return 0;
		}
	}
}
