/*
 *題目: 結構體
 *班級: 資二乙
 *座號: 5
 *姓名: 王晨洋
 *日期: 9/6
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct profile{
    float height,weight;
    string name;
    double BMI;
}student[3];
int main(){
    for(int i=0;i<3;i++){
        cout << "input student " << i+1 << " name" << endl;
        cin >> student[i].name;
        cout << "input student " << i+1 << " height" << endl;
        cin >> student[i].height;
        cout << "input student " << i+1 << " weight" << endl;
        cin >> student[i].weight;
        student[i].BMI = student[i].weight/(student[i].height*student[i].height/10000);
    }
        cout << endl << setw(10) << "Name" << setw(10) << "height" << setw(10) << "weight"  << setw(10) << "BMI" << endl;
    cout << "--------------------------------------------------" << endl;
    for ( int i=0;i<3;i++)
        cout << setw(10) << student[i].name << setw(10) << student[i].height << setw(10) << student[i].weight << setw(10) << student[i].BMI << endl;

    return 0;
}