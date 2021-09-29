/*
班級:資二乙05王晨洋
題目:以建構子設定物件的資料成員初始值
日期:2021/9/27
*/
#include<iostream>
using namespace std;
class Ccon_test
{
    private:
        double radius;

    public:
        Ccon_test(double r)
        {
            radius=r;
            cout<<"建構子設定初始值"<<endl; 
        }

        void showData()
        {
            cout<<"radius="<<radius<<endl;
        } 
 };
 
 int main()
 {
     Ccon_test circle(6.19);
     circle.showData();
     return 0;
 }