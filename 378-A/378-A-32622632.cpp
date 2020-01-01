#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	int i,n1,n2,j,t=0,x,m,a,b,q,k,d,e,n,l,r,ans=0,ans1=0,flag1=0,flag=0;
	//cin>>nint w=0,odd=0,even=0,sum=0;	
	cin>>a>>b;
	i=1;
	int one=0,two=0,equal=0;
	while(i<=6)
	{
		d=abs(i-a);
		e=abs(i-b);
		if(d<e)
		{
			one++;
		}
		else if(d==e)
		equal++;
		else if(d>e)
		two++;
		i++;				
	}
	cout<<one<<" "<<equal<<" "<<two;
}