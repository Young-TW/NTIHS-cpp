#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
   vector<int>v;
   // 宣告整數型態的vector取名為v
   v.push_back(5);
   v.push_back(1);
   v.push_back(3);
   // 增加三筆資料到vector
   sort(v.begin(),v.end());
   //由小到大排序
   cout<<"由小到大:"<<endl;
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<","; 
   }
   cout << "\n\n";
   cout<<"由大到小:"<<endl;
   reverse(v.begin(),v.end());
   //由大到小排序
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<",";
   }
   return 0;
}
