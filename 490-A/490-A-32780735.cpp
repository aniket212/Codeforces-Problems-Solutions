#include<iostream>
using namespace std;
int main(void)
{
	int i,j,t,n;
	cin>>n;
	int count[4]={0};
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	if(count[1]==0 || count[2]==0 || count[3]==0)
	cout<<0<<endl;
	else
	{
	int min1=min(count[3],min(count[1],count[2]));
	cout<<min1<<endl;
	for(j=0;j<min1;j++)
	{
		int one=0,two=0,three=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==1 && one==0)
			{
				one++;
				a[i]=0;
				cout<<i+1<<" ";
			}
			else if(a[i]==2 && two==0)
			{
				two++;
				a[i]=0;
				cout<<i+1<<" ";
			}
			else if(a[i]==3 && three==0)
			{
				three++;
				a[i]=0;
				cout<<i+1<<" ";
			}
		}
		cout<<endl;
	}
}
}