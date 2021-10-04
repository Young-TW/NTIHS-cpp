/*
 *  班級：資二乙
 *  座號：5
 *  姓名：王晨洋
 *  題目：8-10 籃球計分板 輸入1到3繼續計分 輸入0結束
 */

#include <iostream>
#include <string>
using namespace std;

class Csequence{
private:
    int sum;
    int rangeTop,rangeBtm;

public:
    Csequence();
    void input_add();
    void showTotal(int);
};

Csequence::Csequence(){
    sum = 0;
    rangeTop = 3;
    rangeBtm = 0;
}

void Csequence::input_add(){
    int n;
    do{
        do{
            cout << "輸入得分(輸入0比賽結束)";
            cin >> n;
        }while(n>rangeTop || n<rangeBtm);
        sum = sum + n;
        showTotal(n);
    }while(n!=0);
}

void Csequence::showTotal(int s){
    if(s==0)
        cout << "總得分 = " << sum << endl;
    else
        cout << "累計得分 = " << sum << endl;
}

int main(){
    Csequence totalOfSeq;
    totalOfSeq.input_add();
    return 0;
}