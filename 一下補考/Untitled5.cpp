/*
 *作者:王晨洋 
 *日期:2021/7/2 
 *題目:算三角形斜邊和角度 
 */
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	while(1){
		int x = 1;
		int y = 1;
		cout << "輸入x: " << endl;
		cin >> x;
		if(x==0 || y==0){
			return 0;
		}
		cout << "輸入y: " << endl;
		cin >> y;
		double atan = atan2(y,x);
		atan = atan*180/3.14;
		cout << "角度: " << atan; 
		x = x*x;
		y = y*y;
		double z = x+y;
		z = sqrt(z);
		cout << "斜邊: " << z << endl; 
		cout << "輸入0結束程式" << endl;
		if(x==0 || y==0){
			return 0;
		}
	}
}
