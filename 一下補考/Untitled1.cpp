/*
 *作者:王晨洋 
 *日期:2021/7/2 
 *題目:產生亂數 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int buff[5];
	for(int count=1;count<6;count++){
		for(int i=1;i<6;i++){
			srand( time(NULL) );
			buff[i] = rand();
			buff[i] = buff[i]%20;
			for(int a=1;a<6;a++){
				if(buff[i] == buff[a]){
					srand(time(NULL));
					buff[i] = rand();
					buff[i] = buff[i]%20;
				}
			}
		}
		for(int i=1;i<6;i++){
			cout << "buff " << i << " : " << buff[i] << endl;
		}
	}
	return 0;
}
