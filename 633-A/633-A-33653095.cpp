#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,a,b,c,flag=0;
	cin>>a>>b>>c;
	for(i=0;i<=c/b;i++)
	{
		if((c-i*b)%a==0)
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"NO"<<endl;
}