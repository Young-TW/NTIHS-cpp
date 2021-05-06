#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <fstream>

using namespace std;
int main(){
    int score[3][50][10];
    int sum[3][50];
    float ave[3][50];
    string name[3][30];
    int s,a;
    //計算
    string uniline,uniscorestring;
    
    while (getline (scores.txt,uniscorestring)) {
        cout << myText;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<50;j++){
            sum[i][j] = score[i][j][1] + score[i][j][2] + score[i][j][3]; 
            ave[i][j] = sum[i][j]/3.0;
        }
    }
    
    for(int i=0;i<3;i++){
        cout << "===================================  Class " << i+1 << " =========================================\n";
        s=1;
        for(int j=0;j<30;j++){
            cout << "Student ID : ";
            cout << s << "\n";
            cout << "Chinese ==> [" << score[i][j][0] << "] " << "\n";
            cout << "English ==> [" << score[i][j][1] << "] " << "\n";
            cout << "Math    ==> [" << score[i][j][2] << "] " << "\n";
            s++;
        }
    }
    system ("pause");
    system ("cls");
    s=1;
    
    for(int i=0;i<3;i++){
        s=1;
        cout << "====================== Class " << i+1 << " scores table ==============================================\n";
        cout << "ID\t" << setw(15) << "Chinese" << setw(15) << "English" << setw(15)<< "Math" << setw(15) << "Sum" << setw(12) << "\tAVE\n";
        for(int j=0;j<30;j++){
            cout << s << "\t" << setw(15) << score[i][j][0] << setw(15) << score[i][j][1] << setw(15) << score[i][j][2]  << setw(15) << sum[i][j]  << setw(12) << fixed << setprecision(2)  << "\t" <<ave[i][j] << "\n";
            s++;
        }
    }
    cout << "==========================================================================================\n";
    cout << "Choice class 1 - 3 , 4 for all , C ==> Chinese , E ==> English , M ==> Math , 0 to eixt >>";
    int n;

    while(cin >> n){
        switch (n){

        case 1:
            cout << "===================================  Class 1 =========================================\n";
            s=1;
            for(int j=0;j<30;j++){
                cout << "Student ID : ";
                cout << s << "\n";
                cout << "Chinese ==> [" << score[1][j][0] << "] " << "\n";
                cout << "English ==> [" << score[1][j][1] << "] " << "\n";
                cout << "Math    ==> [" << score[1][j][2] << "] " << "\n";
                s++;
            }
            break;
        case 2:
            cout << "===================================  Class 2 =========================================\n";
            s=2;
            for(int j=0;j<30;j++){
                cout << "Student ID : ";
                cout << s << "\n";
                cout << "Chinese ==> [" << score[2][j][0] << "] " << "\n";
                cout << "English ==> [" << score[2][j][1] << "] " << "\n";
                cout << "Math    ==> [" << score[2][j][2] << "] " << "\n";
                s++;
            }
            break;
        case 3:
            cout << "===================================  Class 3 =========================================\n";
            s=3;
            for(int j=0;j<30;j++){
                cout << "Student ID : ";
                cout << s << "\n";
                cout << "Chinese ==> [" << score[3][j][0] << "] " << "\n";
                cout << "English ==> [" << score[3][j][1] << "] " << "\n";
                cout << "Math    ==> [" << score[3][j][2] << "] " << "\n";
                s++;
            }
            break;
        case 4:
            for(int i=0;i<3;i++){
                cout << "===================================  Class " << i+1 << " =========================================\n";
                s=1;
                for(int j=0;j<30;j++){
                    cout << "Student ID : ";
                    cout << s << "\n";
                    cout << "Chinese ==> [" << score[i][j][0] << "] " << "\n";
                    cout << "English ==> [" << score[i][j][1] << "] " << "\n";
                    cout << "Math    ==> [" << score[i][j][2] << "] " << "\n";
                    s++;
                }
            }
            case 0: return 0;
        default:
            
            break;
        }
    }


///////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}