#include<bits/stdc++.h>
#define max1 1000000007
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long int i,j,t,x,q,k,d,n,l,r;
	char s[10001],s1[10001];
	//cin>>t;
	cin>>s;
	cin>>s1;
	l=strlen(s);
	//int l1=strlen(s1);
	int flag=0,ans=0;
	for(i=0;i<l;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		s[i]+=32;
		if(s1[i]>='A' && s1[i]<='Z')
		s1[i]+=32;		
	}
	for(i=0;i<l;i++)
	{
		if(s[i]>s1[i])
		{
			flag=1;
			break;
		}
		else if(s1[i]>s[i])
		{
			ans=1;
			break;
		}	
	}
	if(flag)
	cout<<1<<endl;
	else if(ans)
	cout<<-1<<endl;
	else if(i==l)
	cout<<0<<endl;
}