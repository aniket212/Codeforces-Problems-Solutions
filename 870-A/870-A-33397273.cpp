#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,n,n2,min=10,min1=10,flag=0,ans=0;
	int count[10]={0},count1[10]={0};
	cin>>n>>n2;
	int a[n],b[n2];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count[a[i]]++;
		if(min>a[i])
		min=a[i];
	}
	for(j=0;j<n2;j++)
	{
		cin>>b[j];
		count1[b[j]]++;
		if(min1>b[j])
		min1=b[j];
	}
	
	for(i=0;i<10;i++)
	{
		if(count[i]!=0 && count1[i]!=0)
		{
			flag=1;
			ans=i;
			break;
		}
	}
	if(flag==1)
	cout<<ans<<endl;
	else if(min==min1)
	cout<<min;
	else if(min>min1)
	cout<<min1<<min;
	else
	cout<<min<<min1;
	return 0;
	
}