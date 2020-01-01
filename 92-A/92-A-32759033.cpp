#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i,n1,n2,j,t=0,x,m,b=0,q,k,d,e,n,l,r,sum=0,flag=0,max1,max2;
	//int a,c;
	//cin>>a>>b>>c;
	//cin>>l;
	cin>>m>>n;
	k=m*(m+1)/2;
	q=n;
	if(k>n)
	{
		for(i=1;i<=m;i++)
		{
			if((sum+i)<=n)
			sum+=i;
			else
			break;	
		}
		//cout<<sum<<endl;
		cout<<abs(n-sum)<<endl;
	}
	else if(n%k==0)
	cout<<0<<endl;
	else
	{
		sum=0;
		d=n%k;
		int a=d;
		for(i=1;i<=d;i++)
		{
			if((sum+i)<=a)
			{
				sum+=i;
				d-=i;
			}
			else
			break;
		}
		cout<<d<<endl;
	}
	//cout<<d<<endl;
}