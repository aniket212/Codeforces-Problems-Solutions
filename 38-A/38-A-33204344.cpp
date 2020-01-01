#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,n,x,y;
	cin>>n;
	int a[n],sum=0;
	for(i=1;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>y>>x;
	for(i=y;i<x;i++)
	sum+=a[i];
	cout<<sum<<endl;
	
}