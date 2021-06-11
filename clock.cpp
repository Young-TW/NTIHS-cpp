#include <windows.h>
#include <stdio.h>
#include <iostream> 
#include <time.h> 
#include <iomanip>

using namespace std;
int main()
{    
    clock_t t1, t2,i;
    t1 = clock();
    for (i=0;i<5000;i++){
	    cout<<"I love C++.\n";
	}
    t2 = clock();
    cout<<"®É¶¡¬°"<<fixed<<setprecision(3)<<(t2-t1)/(double)(CLOCKS_PER_SEC)<<"sec";
    return 0;
}

