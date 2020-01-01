#include<bits/stdc++.h>
#define max1 1000000007
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long long int i,j,t,x,q,k,d,n,l,r,ans;
	char s[10001];
	cin>>n>>k;
	
	if(n%2==0)
	{
		x=n/2;
		if(k<=n/2)
		ans=2*k-1;
		else
		{
			if(k%2==0)
			l=k/2;
			else
			l=k%x;
			ans=2*l;
		}
	}
	else
	{
		x=n/2+1;
		if(k<=(n/2+1))
		ans=2*k-1;
		else
		{
			l=k%x;
			ans=2*l;
		}
	}
	cout<<ans<<endl;
}