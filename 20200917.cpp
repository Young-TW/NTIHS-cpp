#include <iostream>
using namespace std;
int chn;
int mth;
int eng;
int tt;
float ave;
int main()
{
    cout << "請輸入國文成績: \n";
    cin >> chn ;
    cout << "請輸入數學成績: \n";
    cin >> mth ;
    cout << "請輸入英文成績: \n";
    cin >> eng ;
    tt = chn + eng + mth ;
    ave = ( chn + eng + mth ) /3.0;
    cout << "============================== \n";
    cout << "你的總分是 " << tt << "分" << endl;
    cout << "你的平均分數是 " << ave << "分";
    return 0;
}
