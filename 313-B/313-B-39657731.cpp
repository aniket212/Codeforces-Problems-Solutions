#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long int i,j,t,n,l,r;
	string s;
	cin>>s;
	int dp[100001];
	dp[0]=0;
	for(i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		dp[i]=dp[i-1]+1;
		else
		dp[i]=dp[i-1];	
	}
	cin>>n;
	while(n--)
	{
		cin>>l>>r;
		cout<<dp[r-1]-dp[l-1]<<endl;
	}
}