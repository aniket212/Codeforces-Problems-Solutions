#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i,n1,n2,j,t=0,x,m,b,q,k,d,e,n,l,r,ans=0,ans1=0,max1,max2;
	cin>>n;
	d=n/5;
	if(d<1)
	cout<<1<<endl;
	else if(d>=1)
	{
		k=n%5;
		if(k==0)
		cout<<d<<endl;
		else
		cout<<d+1<<endl;
	}
}