#include<iostream>
using namespace std;
int main(void)
{
	long long int i,j,t,n,m,a,b,c,d,e;
	long long int ans=0;
	cin>>m>>n;
	cin>>a>>b>>c;
	m=m-(2*a);
	if(m<0)
	{
		 e=-m;
		ans+=e;
		m=0;
		
	}
	n-=b;
	if(n<0)
	{
		d=-n;
		ans+=d;
		n=0;
	}
	m-=b;
	if(m<0)
	{
		d=-m;
		ans+=d;
		m=0;
	}
	n=n-(3*c);
	if(n<0)
	{
		d=-n;
		ans+=d;
		n=0;
	}
	cout<<ans;
}