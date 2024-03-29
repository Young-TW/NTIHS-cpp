#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int score[3][50][10] = 
    {
        {
            {15 , 93 , 72} ,
            {77 , 14 , 99} ,
            {22 , 31 , 85} ,
            {94 , 11 , 92} ,
            {16 , 19 , 43} ,
            {71 , 11 , 13} ,
            {52 , 47 , 13} ,
            {21 , 33 , 53} ,
            {87 , 99 , 34} ,
            {14 , 26 , 72} ,
            {25 , 45 , 20} ,
            {46 , 16 , 52} ,
            {54 , 53 , 11} ,
            {16 , 46 , 32} ,
            {24 , 68 , 23} ,
            {82 , 19 , 24} ,
            {10 , 73 , 40} ,
            {46 , 25 , 55} ,
            {81 , 13 , 90} ,
            {10 , 51 , 70} ,
            {13 , 56 , 72} ,
            {21 , 38 , 91} , 
            {73 , 75 , 81} , 
            {70 , 16 , 12} , 
            {24 , 21 , 63} , 
            {34 , 50 , 19} , 
            {47 , 13 , 87} , 
            {76 , 97 , 25} , 
            {11 , 83 , 44} , 
            {70 , 58 , 36} , 
            {39 , 49 , 91} , 
            {87 , 20 , 13} , 
            {84 , 13 , 17} , 
            {92 , 45 , 27} , 
            {17 , 55 , 96} , 
            {25 , 47 , 95} , 
            {92 , 39 , 95} , 
            {54 , 14 , 84} , 
            {33 , 10 , 86} , 
            {64 , 16 , 14} , 
            {18 , 77 , 48} , 
            {23 , 35 , 66} , 
            {85 , 61 , 70} , 
            {72 , 63 , 46} , 
            {41 , 30 , 86} , 
            {57 , 55 , 15} , 
            {83 , 60 , 93} , 
            {11 , 84 , 17} , 
            {85 , 44 , 72} , 
            {27 , 96 , 15}
        } ,
        {
            {44 , 99 , 48} ,
            {98 , 41 , 64} ,
            {23 , 53 , 16} , 
            {17 , 92 , 32} , 
            {14 , 77 , 13} , 
            {17 , 63 , 84} , 
            {50 , 18 , 55} , 
            {64 , 97 , 86} , 
            {42 , 53 , 56} , 
            {72 , 12 , 12} , 
            {78 , 17 , 61} , 
            {11 , 34 , 85} , 
            {26 , 18 , 33} , 
            {99 , 84 , 86} , 
            {11 , 32 , 14} , 
            {62 , 65 , 19} , 
            {14 , 94 , 16} , 
            {87 , 60 , 10} , 
            {19 , 71 , 90} , 
            {50 , 16 , 66} , 
            {99 , 90 , 22} , 
            {74 , 57 , 36} , 
            {46 , 27 , 88} , 
            {59 , 18 , 77} , 
            {93 , 50 , 35} , 
            {52 , 11 , 71} , 
            {31 , 13 , 15} , 
            {49 , 40 , 85} , 
            {37 , 68 , 81} , 
            {28 , 11 , 75} , 
            {64 , 23 , 88} , 
            {82 , 50 , 11} , 
            {93 , 46 , 11} , 
            {23 , 22 , 85} , 
            {61 , 86 , 40} , 
            {11 , 84 , 17} , 
            {55 , 45 , 79} , 
            {19 , 28 , 71} , 
            {97 , 33 , 74} , 
            {73 , 11 , 48} , 
            {49 , 53 , 82} , 
            {86 , 16 , 10} , 
            {23 , 34 , 91} , 
            {22 , 18 , 45} , 
            {37 , 87 , 24} , 
            {15 , 16 , 51} , 
            {57 , 51 , 21} , 
            {88 , 20 , 18} , 
            {33 , 23 , 48} , 
            {44 , 10 , 57}
        } ,
        {
            {14 , 15 , 45} , 
            {90 , 28 , 37} , 
            {94 , 63 , 69} , 
            {45 , 12 , 39} , 
            {36 , 75 , 87} , 
            {63 , 61 , 43} , 
            {41 , 36 , 50} , 
            {25 , 93 , 37} , 
            {65 , 22 , 38} , 
            {21 , 73 , 98} , 
            {57 , 52 , 54} , 
            {17 , 98 , 12} , 
            {94 , 64 , 78} , 
            {59 , 88 , 57} , 
            {71 , 51 , 54} , 
            {62 , 34 , 79} , 
            {15 , 17 , 64} , 
            {12 , 82 , 47} , 
            {35 , 62 , 13} , 
            {40 , 50 , 61} , 
            {40 , 54 , 10} , 
            {57 , 78 , 85} , 
            {14 , 54 , 19} , 
            {64 , 72 , 40} , 
            {83 , 23 , 14} , 
            {33 , 51 , 15} , 
            {58 , 33 , 88} , 
            {67 , 28 , 45} , 
            {87 , 13 , 88} , 
            {29 , 18 , 10} , 
            {74 , 23 , 69} , 
            {18 , 26 , 13} , 
            {13 , 76 , 20} , 
            {71 , 69 , 41} , 
            {89 , 22 , 28} , 
            {83 , 36 , 69} , 
            {90 , 12 , 41} , 
            {55 , 78 , 42} , 
            {69 , 10 , 87} , 
            {83 , 13 , 40} , 
            {70 , 53 , 19} , 
            {13 , 99 , 12} , 
            {45 , 51 , 96} , 
            {90 , 65 , 11} , 
            {58 , 16 , 88} , 
            {21 , 29 , 36} , 
            {32 , 95 , 54} , 
            {29 , 85 , 39} , 
            {83 , 40 , 56} , 
            {13 , 27 , 15}
        }
    };
    int sum[3][50];
    float ave[3][50];
    string name[3][30];
    int s,a;
    //計算
    for(int i=0;i<3;i++){
        for(int j=0;j<50;j++){
            sum[i][j] = score[i][j][1] + score[i][j][2] + score[i][j][3];
            ave[i][j] = sum[i][j]/3.0;
        }
    }

    while(1){
        int c;
        cin >> c;
        if(c==0) break;
        else if(c==1){
            
        }
        else if(c==2){
            
        }
        else if(c==3){
            
        }
        else if(c==4){
            
        }
    }

    for(int i=0;i<3;i++){
        cout << "===================================  Class " << i+1 << " =========================================\n";
        s=1;
        for(int j=0;j<30;j++){
            cout << "Student ID : ";
            cout << s << setw(15);
            cout << "Chinese ==> [" << score[i][j][0] << "] " << setw(15);
            cout << "English ==> [" << score[i][j][1] << "] " << setw(15);
            cout << "Math    ==> [" << score[i][j][2] << "] " << setw(15);
            s++;
        }
    }
    system ("pause");
    system ("cls");
    s=1;
    
    for(int i=0;i<3;i++){
        s=1;
        cout << "====================== Class " << i+1 << " scores table ==============================================\n";
        cout << "ID\tChinese\tEnglish\tMath\tSum\tAVE\n";
        for(int j=0;j<30;j++){
            cout << s << setw(15) << score[i][j][0] << setw(15) << score[i][j][1] << setw(15) << score[i][j][2]  << setw(15) << sum[i][j]  << setw(15) <<ave[i][j] << "\n";
            s++;
        }
    }
    cout << "==========================================================================================\n";

    cout << "Choice class 1 - 3 , 4 for all , C ==> Chinese , E ==> English , M ==> Math , 0 to eixt >>";
    return 0;
}