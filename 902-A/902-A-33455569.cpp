#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(void)
{	
	int i,j,t,n,m,count=0,flag=0,max1=0,smax=0;
	cin>>n>>m;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	if(a[0]!=0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
	for(i=0;i<n;i++)
		{
		if(i==0)
		{
		}
		else
		{
			if(a[i]>max1)
			{
				flag=1;
				break;
			}
		}
		if(b[i]<m)
		count++;
		if(max1<b[i])
		{
			//smax=max1;
			max1=b[i];
		}
	}
	if(count==n || flag==1)
	{
		cout<<"NO"<<endl;
	}
	else
	cout<<"YES"<<endl;
}
}