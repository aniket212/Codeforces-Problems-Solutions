#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i,n1,n2,j,t=0,s,x,m,b=0,q,k,d,e,n,l,r,sum=0,flag=0,max1,max2;
	//int a,c;
	//cin>>a>>b>>c;
	//cin>>l;
	cin>>m>>n>>s;
	if(m<0)
	m=-m;
	if(n<0)
	n=-n;
	d=s-(m+n);
	if(m==0 && n==0 && s%2==0)
	cout<<"YES"<<endl;
	else if((m+n)==s)
	cout<<"YES"<<endl;
	else if(d%2==0 && d>0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}