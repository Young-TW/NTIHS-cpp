#include <iostream>
using namespace std;
int main()
{
	int i,c=0,n;
	cout << "��J�����";
	cin >> n;
	cout << "�H�U��" << n << "���]��\n";
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
	cout<<"\n�`�@��"<<c<<"��" ;
	return 0;
}
