#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long long int i,j,t=0,x,q,k,d,n,l1=0,r,ans=0,flag=0,f=0;
	char s[10001];
	//cin>>n>>k;
	cin>>n;
	int a[n];
	int max1=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		max1=max(max1,a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=max1)
		ans+=(max1-a[i]);
	}
	cout<<ans<<endl;
}