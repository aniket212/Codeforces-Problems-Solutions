#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,ans=0;
	string s,s1;
	cin>>s;
	cin>>s1;
	int l=s.length();
	int l1=s1.length();
	int count=0;
	for(i=0;i<l;i++)
	{
		if(s[i]!=s1[i])
		count++;
	}
	if(count%2!=0)
	cout<<"impossible"<<endl;
	else
	{
		for(i=0;i<l;i++)
		{
			if(s[i]!=s1[i])
			{
				ans++;
				if(ans%2!=0)
				{
					if(s[i]=='0')
					s[i]='1';
					else if(s[i]=='1')
					s[i]='0';
				}
			}
		}
		cout<<s<<endl;
	}
}