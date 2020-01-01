#include<iostream>
using namespace std;
int main(void)
{
	long int a[5],d=0,sum=0,min1=0;
	for(int i=0;i<5;i++)
	cin>>a[i];
	int count[101]={0};
	for(int i=0;i<5;i++)
	{
		sum+=a[i];
		count[a[i]]++;
	}
	for(int i=0;i<=100;i++)
	{
		if(count[i]==2 || count[i]==3)
		{
			d=count[i]*i;
		}
		else if(count[i]>3)
		{
			count[i]=3;
			d=count[i]*i;
		}
		min1=max(min1,d);
	}
	int ans=sum-min1;
	cout<<ans<<endl;
}