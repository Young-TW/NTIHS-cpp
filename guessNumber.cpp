#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int min=0,MAX=9,anstimes=0,A,B,divNum;
    int i,j,randNum,existing,temp;
    int ans[4]= {9},guess[4]= {0};
    int *iptr_ans=ans;
    int *iptr_guess=guess;

    srand(time(NULL));
    for(i=0; i<4; i++) {
        do {
            existing=0;
            randNum=min+rand()%(MAX-min+1);
            for(j=0; j<i; j++)
                if(*(iptr_ans+j)==randNum) {
                    existing=1;
                    break;
                }
        } while((existing>0)||(i==0&&randNum==0));
        *(iptr_ans+i)=randNum;
    }

    do {
        cout<<"�п�J�A������(4�Ӭ۲��Ʀr,�Y��J9999�h�����C��):";
        cin>>temp;
        if(temp==9999)
            break;
        A=B=0;
        divNum=1000;
        for(i=0; i<4; i++) {
            *(iptr_guess+i)=temp/divNum%10;
            divNum/=10;
        }

        for(i=0; i<4; i++) {
            for(j=0; j<4; j++)
                if( (iptr_ans+i)==(iptr_guess+j)) {
                    if(i==j)
                        A++;
                    else
                        B++;
                }
        }
        anstimes++;
        cout<<"��"<<anstimes<<"���@�������G��"<<A<<"A"<<B<<"B"<<endl;
    } while(A!=4);

    if(A==4)
        cout<<"����F�A�A�u�o��!!"<<endl;
    else
        cout<<"���T���׬�"<<iptr_ans<<(iptr_ans+1)<<(iptr_ans+2)<<(iptr_ans+3)<<endl;

    return 0;
}
