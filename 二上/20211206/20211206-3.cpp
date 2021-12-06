#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a, int b)
{
return a>b; //由大到小
}
 
 
int main()
{
int buf[]={1,2,3,7,8,9,4,6,5};
 
cout << "排序前：";
for(int i=0; i<9; i++){
cout << buf[i] << ", ";
}
cout << "\b\b " << endl;
 
sort(buf, buf+9); //由小到大
 
cout << "排序後(由小到大)：";
for(int i=0; i<9; i++){
cout << buf[i] << ",";
}
cout << "\b " << endl;
 
sort(buf, buf+9, comp); //由大到小
 
cout << "排序後(由大到小)：";
for(int i=0; i<9; i++){
cout << buf[i] << ",";
}
cout << "\b " << endl;
 
return 0;
}
