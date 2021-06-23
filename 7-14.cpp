//filename :7-14
#include <iostream>
#include <conio.h>
using namespace std;
void sokoban(char map[][15],int *,int *);
int main()
{
	char map[15][15]={"+--------+",
					"|O       |",
					"| @+---  |",
					"|        |",
					"|-- ---  |",
					"|   |    |",
					"|        |",
					"| | -----+",
					"|       X|",
					"+---------"};
							
	int i,x,y,p,q;
	char key1;
	x=1; y=1; p=8; q=8;
	cout << "����O�A�N@����X�B" << endl;
	for(i=0;i<=9;i++)
		cout << map[i] << endl;
		

	while(map[p][q]!='@')
	{
		sokoban(map,&x,&y);
        system("cls");
        cout << "����O�A�N@����X�B" << endl;
		for(i=0;i<=9;i++)
		cout << map[i] << endl;
	}
	cout << "���߹L���I" << endl;
	key1==getch();
 	return 0;
}
void sokoban(char a[][15],int *x,int *y)
 {
	char key;
    key=getch();
	switch(key)
	{
      case 80: //�U
        if (a[*x+1][*y]=='@')
   	      {
           if(a[*x+2][*y]!='-' && a[*x+2][*y]!='+' && a[*x+2][*y]!='|')
		    {
		      a[*x][*y]=' ';
		      (*x)++;
		      a[*x][*y]='O';
		      a[*x+1][*y]='@';
			}
          }
        else
          {
           if(a[*x+1][*y]!='-' && a[*x+1][*y]!='+' && a[*x+1][*y]!='|')
		    {
		      a[*x][*y]=' ';
		      (*x)++;
		      a[*x][*y]='O';
		    }
          }  
		  break;

	  case 72://�W
		if (a[*x-1][*y]=='@')
		 {
          if(a[*x-2][*y]!='-' && a[*x-2][*y]!='+' && a[*x-2][*y]!='|')
			{
             a[*x][*y]=' ';
	          (*x)--;
			 a[*x][*y]='O';
			 a[*x-1][*y]='@';
			}
         }
		else
		 {
          if(a[*x-1][*y]!='-' && a[*x-1][*y]!='+' && a[*x-1][*y]!='|')
			{
			  a[*x][*y]=' ';
			  (*x)--;
			  a[*x][*y]='O';
			}
         }
        break;
        
	  case 75:      //��
		if (a[*x][*y-1]=='@')
		 {
		  if(a[*x][*y-2]!='|' && a[*x][*y-2]!='+' && a[*x][*y-2]!='-')
		   {
		    a[*x][*y]=' ';
			(*y)--;
			a[*x][*y]='O';
			a[*x][*y-1]='@';
		   }
          }
		else
          {
		   if(a[*x][*y-1]!='|' && a[*x][*y-1]!='+' && a[*x][*y-1]!='-')
		    {
			 a[*x][*y]=' ';
			 (*y)--;
			 a[*x][*y]='O';
		    }
          }	
          break;
          
	  case 77:  //�k
	    if (a[*x][*y+1]=='@')
	     {
	      if(a[*x][*y+2]!='|' && a[*x][*y+2]!='+' && a[*x][*y+2]!='-')
	       {
			a[*x][*y]=' ';
			(*y)++;
			a[*x][*y]='O';
			a[*x][*y+1]='@';
		   }
         }
        else
         {
		  if(a[*x][*y+1]!='|' && a[*x][*y+1]!='+' && a[*x][*y+1]!='-')
		   {
			a[*x][*y]=' ';
			(*y)++;
			a[*x][*y]='O';
		   }    
         }
         break;
    }	  
 }

