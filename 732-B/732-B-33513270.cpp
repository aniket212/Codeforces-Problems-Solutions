#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,n,k,d,ans=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		if(a[i]+a[i+1]<k)
		{
			d=k-(a[i]+a[i+1]);
			a[i+1]+=d;
			ans+=d;
		}
	}
	cout<<ans<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}