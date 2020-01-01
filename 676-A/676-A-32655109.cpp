#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i,n1,n2,j,t=0,x,m,b,q,k,d,e,n,l,r,ans=0,ans1=0,max1,max2;
	cin>>n;
	int a[n],max=0,min=1000;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		max1=i;
		else if(a[i]==n)
		max2=i;
	}
	int diff=abs(max1-max2);
	if(max1==0 && max2==(n-1))
	cout<<n-1<<endl;
	else if(max2==0 && max1==(n-2))
	cout<<n-1<<endl;
	else
	{
		if(max1<max2)
		{
			d=max1-0;
			l=(n-1)-max2;
		}
		else if(max1>max2)
		{
			d=(n-1)-max1;
			l=max2-0;
		}
		if(d>=l)
		cout<<d+diff;
		else if(d<l)
		cout<<l+diff;
	}
}