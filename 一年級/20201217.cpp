#include <iostream>
using namespace std;
int main()
{
	int i,c=0,n;
	cout << "輸入正整數";
	cin >> n;
	cout << "以下為" << n << "的因數\n";
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			cout <<i;
			c++;
			if(i!=n){
				cout<<",";
			}
		}
		i++;
	}
	cout<<"\n總共有"<<c<<"個" ;
	return 0;
}
