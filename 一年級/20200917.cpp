#include <iostream>
using namespace std;
int chn;
int mth;
int eng;
int tt;
float ave;
int main()
{
    cout << "�п�J��妨�Z: \n";
    cin >> chn ;
    cout << "�п�J�ƾǦ��Z: \n";
    cin >> mth ;
    cout << "�п�J�^�妨�Z: \n";
    cin >> eng ;
    tt = chn + eng + mth ;
    ave = ( chn + eng + mth ) /3.0;
    cout << "============================== \n";
    cout << "�A���`���O " << tt << "��" << endl;
    cout << "�A���������ƬO " << ave << "��";
    return 0;
}
