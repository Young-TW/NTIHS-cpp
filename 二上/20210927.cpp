/*
 *  班級：資二乙
 *  座號：5
 *  姓名：王晨洋
 *  題目：class基本操作
 */

#include <iostream>
#include <string>
using namespace std;

class Cprofile{
private:
    string name;
    double weight;
    double height;
    double bmi;

public:
    void keyinData(){
        cout << "input your name:\n";
        getline(cin,name);
        cout << "input your height(cm):\n";
        cin >> height;
        cout << "input your weight(kg):\n";
        cin >> weight;
    }

    double calBMI(){
        cout << "name:" << name << endl;
        bmi = weight/(height*height/10000);
        return bmi;
    }
};

int main(){
    Cprofile student;
    student.keyinData();
    cout << "--------------\n";
    cout << "BMI=" << student.calBMI() << endl;
    return 0;
}