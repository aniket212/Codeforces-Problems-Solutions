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
	cin>>t;
	while(t--)
	{		
		cin>>s;
		int l=strlen(s);
		//int flag=0;
		if(l>10)
		cout<<s[0]<<l-2<<s[l-1]<<endl;
		else
		cout<<s<<endl;
	}
}
	
			//flag=1;