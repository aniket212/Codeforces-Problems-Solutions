#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i,n1,n2,j,t=0,x,m,b=0,q,k,d,e,n,l,r,ans=0,flag=0,max1,max2;
	//int a,c;
	//cin>>a>>b>>c;
	cin>>n>>m;
	int a[n],index=0,max=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			flag=1;
			if(a[i]%m==0)
			a[i]/=m;
			else
			a[i]=a[i]/m+1;
			if(a[i]>=max)
			{
			index=i+1;
			max=a[i];
			}
		}
		else if(a[i]<=m)
		{
			ans++;
		}
}
if(flag==1)
cout<<index<<endl;
else if(ans==n)
cout<<n<<endl;
}