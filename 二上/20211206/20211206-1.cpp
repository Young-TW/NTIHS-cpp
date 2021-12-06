#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> v;
 
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   // 加入四個值
 
   for(int i=0; i<v.size(); ++i)
   cout << v[i] << endl;
   // 印出所有值
 
   v.pop_back();
   // 拿掉最後一個值
   cout << endl;
 
   for(int i=0; i<v.size(); ++i)
   cout << v[i] << endl;
   // 印出所有值
 
   system("pause");
   return 0;
}
