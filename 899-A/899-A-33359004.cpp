#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long int i,j,t,n;
	cin>>n;
	int one=0,two=0,ans=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		one++;
		else if(a[i]==2)
		two++;
	}
	if(one==two)
	cout<<one<<endl;
	else
	{
		if(one>=two)
		{
			one=one-two;
			ans=two;
			int d=one/3;
			ans+=d;
		}
		else if(two>=one)
		{
			ans=one;
		}
		cout<<ans<<endl;
	}
	
}