#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long int i=0,n1,n2,j,t=0,x,m,q,k,d,n,l,r,ans=0,ans1,f,w;
	cin>>n;
	cin>>n1;
	int a[n1],flag=0;
	int count[101]={0};
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
		count[a[i]]++;
	}
	cin>>n2;	
	int b[n2];
	for(j=0;j<n2;j++)
	{
		cin>>b[j];
		count[b[j]]++;
	}
	for(i=1;i<=n;i++)
	{
		if(count[i]==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"Oh, my keyboard!"<<endl;
	else
	cout<<"I become the guy."<<endl;
}