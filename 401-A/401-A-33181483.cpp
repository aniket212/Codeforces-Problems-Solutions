#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,n,k,x;
	cin>>n>>x;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int pos[x+1]={0},neg[x+1]={0};
	int sum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		pos[a[i]]++;
		else if(a[i]<0)
		neg[-(a[i])]++;
	}
	for(i=0;i<=x;i++)
	{
		if(pos[i]==neg[i])
		continue;
		else
		sum=sum+(pos[i]*i)+(neg[i]*(-i));
	}
	if(sum==0)
	cout<<0<<endl;
	else
	{
	sum=abs(sum);
	int b=sum/x;
	int d=sum%x;
	if(d!=0)
	cout<<b+1<<endl;
	else
	cout<<b<<endl;
}
}