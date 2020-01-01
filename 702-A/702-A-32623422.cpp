#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	int i,n1,n2,j,t=0,x,m,b,q,k,d,e,n,l,r,ans=0,ans1=0,flag1=0,flag=0;
	//cin>>nint w=0,odd=0,even=0,sum=0;	
	cin>>n;
	int a[n],max1=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			ans++;
			if(ans>max1)
			max1=ans;
			flag=1;
		}
		else if(flag==1 && a[i]==a[i+1])
		{
			ans=0;
			flag=0;		
		}
		else if(a[i]>a[i+1] && flag==1)
		{
			ans=0;
			flag=0;
		}
	}
	cout<<max1+1<<endl;
}