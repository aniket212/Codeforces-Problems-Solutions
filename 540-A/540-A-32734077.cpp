#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i,n1,n2,j,t=0,x,m,b=0,q,k,d,e,n,l,r,ans=0,flag=0,max1,max2;
	//int a,c;
	//cin>>a>>b>>c;
	cin>>l;
	char s[10001],s1[1001];
	cin>>s;
	cin>>s1;
	for(i=0,j=0;i<l,j<l;i++,j++)
	{
		d=abs((s[i]-'0')-(s1[j]-'0'));
		if(d>5)
		ans+=(10-d);
		else
		ans+=d;
	}
	cout<<ans<<endl;
}