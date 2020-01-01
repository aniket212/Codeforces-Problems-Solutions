#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//float a=1234.56789;
	//long long int b=(long long)a*a;
	long int i,j,t=0,x,q,k,d,n,l,r,ans=0,ans1,flag=0,f,w;
	float avg;
	string s,s1;
	cin>>s;
	 l=s.length();
	for(i=0;i<l;i++)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && ans==0)
		{	
			i+=2;
		}
		else if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && ans==1)
		{
			i+=2;
			ans=0;
			cout<<" ";
		}
		else
		{
			ans=1;	
			cout<<s[i];
		}
		
	//cout<<s1<<endl;
}
}