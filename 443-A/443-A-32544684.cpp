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
	char s[10001];
	//cin>>t;
	int ans=0;
	int count[26]={0};
	//cin.ignore();
	gets(s);
	//cin.ignore();
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			count[s[i]-'a']++;
			if(count[s[i]-'a']==1)
			ans++;
		}
	}
	cout<<ans<<endl;
}
	
	
			//flag=1;