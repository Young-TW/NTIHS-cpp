#include <iostream>
#include <conio.h>
using namespace std;
void maze(char a[][10],int *,int *);
int main(){
    char map[10][10]={
        "+-------+",
        "|O      |",
        "|--+ |  |",
        "|       |",
        "| | ----+",
        "| |     X",
        "+--------"
    }
    int i,x,y,p,q;
    char key;

    x=1;
    y=1;
    p=6;
    q=8;
    cout << map[i] << endl;
    while (x!=p||y!=q){
        maze(map,&x,&y);
        system("cls");
        cout << "X:�X�f" << endl;
        for (i=0;i<=7;i++){
            cout << map[i] << endl;
        }
    }
    cout << "�L���F!" << endl;
    key = getch();
    return 0;
}

void maze(char a[][10],int *x,int *y){
    char key;
    key = getch()
    switch (key){
        case 80://�U
            if(a[*x+1][*y]!='-'&& a[*x+1][*y]!='+'&& a[*x+1][*y]!='|'){
                a[*x][*y]=' ';
                (*x)++;
                a[*x][*y]='O';
            }
            break;
        case 72://�W
            if(a[*x-1][*y]!='-'&& a[*x-1][*y]!='+'&& a[*x-1][*y]!='|'){
                a[*x][*y]=' ';
                (*x)--;
                a[*x][*y]='O';
            }
            break;
        case 75://��
            if(a[*x][*y-1]!='-'&& a[*x][*y-1]!='+'&& a[*x][*y-1]!='|'){
                a[*x][*y]=' ';
                (*y)--;
                a[*x][*y]='O';
            }
            break;
        case 77://�k
            if(a[*x][*y+1]!='-'&& a[*x][*y+1]!='+'&& a[*x][*y+1]!='|'){
                a[*x][*y]=' ';
                (*y)++;
                a[*x][*y]='O';
            }
            break;
    }
}
