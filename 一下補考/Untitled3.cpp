/*
 *作者:王晨洋 
 *日期:2021/7/2 
 *題目:字串相等 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	string str_1;
	string str_2;
	cout << "字串str_1的內容:";
	cin >> str_1;
	
	cout << endl << "字串str_2的內容:";
	cin >> str_2;
	if(str_1 == str_2){
		cout << "字串相等\n";
	}
	else{
		cout << "字串不相等\n";
	}
	return 0;
}
