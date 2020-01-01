#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	unsigned long long int i,j,t,n,x,y;
	cin>>n>>t;
	int a[n];
	unsigned long long int sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//int sum=0;
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		sum+=(t*a[i]);
		if(t>1)
		t-=1;
	}
	cout<<sum<<endl;
	
}