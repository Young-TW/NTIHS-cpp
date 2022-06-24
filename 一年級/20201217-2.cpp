#include <iostream>
using namespace std;
int main()
{
    int i, j, flag, num;
    num=30;
    i=1;
    while(i<=num){
        flag=1;
        for(j=2; j<i; j++){
            if( i%j==0 ){
                flag=0;
                break;
            }
        }
        if(i==1)
            flag=0;
        
        if( flag==0 )
            cout << i << " \n";
        else
            cout << i << " \n";
        i++;
    }
}
