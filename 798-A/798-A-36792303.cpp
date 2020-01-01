#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//long long int i,n1,n2,j,t=0,x,m,b=0,q,k,d,e,n,l,r,ans=0,flag=0,max1,max2;
	//int a,c;
	//cin>>a>>b>>c;
	//cin>>l;
	char s[1001];
	cin>>s;
	int count=0;
	int l=strlen(s);
	for(int i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			count++;
		}
	}
	if(count==1)
	cout<<"YES"<<endl;
	else if(count==0 && l%2!=0)
	cout<<"YES"<<endl;
	else if(count==0 && l%2==0)
	cout<<"NO"<<endl;
	else
	cout<<"NO"<<endl;
}