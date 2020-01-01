#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main(void)
{
	int i,j,k,t,n;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	a[i]=i+1;
	if(k==0)
	{
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
	else if(k==n-1)
	{
		for(i=n-1;i>=0;i--)
		cout<<a[i]<<" ";
	}
	else if(k%2==0)
	{
		for(i=0;i<k/2;i++)
		{
			swap(&a[i],&a[n-i-1]);
		}
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
	else if(k%2!=0)
	{
		for(i=0;i<k/2;i++)
		{
			swap(&a[i],&a[n-i-1]);
		}
		swap(&a[k/2],&a[k/2+1]);
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
}