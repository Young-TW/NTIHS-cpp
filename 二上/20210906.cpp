/*
 *題目: 結構體 8-1 由鍵盤輸入姓名 身高 體重 儲存於變數中
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 9/6
 */

#include<iostream>
#include<string>

using namespace std;

struct profile{
    string name;
    float weight;
    float height;
}student;

int main(){
    cout<<"input your name\n";
    getline(cin,student.name);
    cout<<"input your weight\n";
    cin>>student.weight;
    cout<<"input your height\n";
    cin>>student.height;


    cout<<"name"<<student.name<<endl;
    cout<<"height :"<<student.height<<endl;
    cout<<"weight :"<<student.weight<<endl;

    return 0;
}