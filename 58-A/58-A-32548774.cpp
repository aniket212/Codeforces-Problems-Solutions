#include<bits/stdc++.h>
#define max1 1000000007
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long long int i,j,t=0,x,q,k,d,n,l1=0,r,ans=0,flag=0,f=0;
	char s[10001];
	//cin>>n>>k;
	cin>>s;
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='h')
		flag=1;
		else if(flag==1 && s[i]=='e')
		t=1;
		else if(s[i]=='l' && flag==1 && t==1)
		{
			ans++;
		}
		else if(flag==1 && t==1 && ans>=2 && s[i]=='o')
		{
			f=1;
			break;
		}	
		//cout<<flag<<" "<<t<<" "<<f<<" "<<l1;
		//cout<<endl;
	}	
	if(f==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}