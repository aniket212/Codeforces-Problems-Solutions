#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long int i,j,t=0,x,q,k,d,n,l,r,ans,ans1,flag=0,f,w;
	float avg;
	char s[10001];
	cin>>k>>n>>w;
	ans=w*k*(w+1)/2;
	if(ans>n)
	{
		x=ans-n;
		cout<<x<<endl;
	}
	else
	cout<<0<<endl;
}