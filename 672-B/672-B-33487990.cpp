#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	string s;
	int i,j,t,l;
	cin>>l;
	cin>>s;
	int count[26]={0},ans=0;
	if(l>26)
	cout<<-1<<endl;
	else if(l<=26)
	{
		for(i=0;i<l;i++)
		{
			count[s[i]-'a']++;
			if(count[s[i]-'a']>=2)
			ans++;
		}
		cout<<ans<<endl;	
	}
}