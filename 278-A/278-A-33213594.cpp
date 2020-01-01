#include<bits/stdc++.h>
using namespace std;
int main(void)
{
		int i,j,t,sum=0,n,x,y,sum1=0,sum2=0,sum3=0;
		cin>>n;
		int a[n+1];
		for(i=1;i<=n;i++)
		cin>>a[i];
		cin>>x>>y;
		if(x==y)
		cout<<"0"<<endl;
		else
		{
			if(x>y)
			{
				for(i=x;i<=n;i++)
				sum+=a[i];
				for(i=1;i<y;i++)
				sum1+=a[i];
				for(i=y;i<x;i++)
				sum2+=a[i];
				sum3=sum+sum1;
				cout<<min(sum3,sum2);
			}
			else
			{
				for(i=y;i<=n;i++)
				sum+=a[i];
				for(i=1;i<x;i++)
				sum1+=a[i];
				for(i=x;i<y;i++)
				sum2+=a[i];
				sum3=sum+sum1;
				cout<<min(sum3,sum2);	
			}
	}
}