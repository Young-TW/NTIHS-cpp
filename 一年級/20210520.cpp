#include <iostream>
using namespace std;
int main(){
    int i;
    int *p;
    i=100;
    p= &i;
    cout<<"i="<<i<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"p="<<p<<endl;
}