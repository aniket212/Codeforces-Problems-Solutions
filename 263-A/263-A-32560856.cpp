#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long long int i,j,t=0,x,q,k,d,n,l,r,ans,ans1,flag=0,f=0;
	char s[10001];
	//cin>>n>>k;
	//cin>>n;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}	
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==1)
			{
				d=i;
				l=j;
				break;
			}
		}
	}
	if(i==2 && j==2)
	cout<<0<<endl;
	else
	{
		int ans=abs(2-d);
		int ans1=abs(2-l);
		cout<<ans+ans1;
	}
}