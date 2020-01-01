#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	unsigned long long int i,n1,n2,j,t=0,x,m,q,k,d,n,l,r,ans=0,ans1=0,flag1=0,flag=0;
	//cin>>n;
	unsigned long long int w=0,odd=0,even=0,sum=0;
	cin>>n;
	long long int a[n];
	//sort(a,a+n);
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		odd++;
		sum+=a[i];
	}
	//cout<<sum<<endl;
	if(odd%2==0)
	cout<<sum<<endl;
	else
	{
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			sum-=a[i];
			break;	
		}
		//break;
	}
	cout<<sum<<endl;
	}
	return 0;
}