#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	int i,j,t,k;
	char s[1001];
	cin>>s;
	int ans=0,min1=10005;
	int count[26]={0};
	int l=strlen(s),distinct=0;
	cin>>k;
	if(k>l)
	cout<<"impossible";
	else
	{
	min1=min(l,k);
	//cout<<min1;
	for(i=0;i<l;i++)
	{
		count[s[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]!=0)
		ans++;
		if(ans==k)
		{
			cout<<0;
			break;
		}
	}
	if(k>ans)
	cout<<k-ans;
}
}