#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char s[10001],s1[10001],s2[10001],s3[10001],s4[10001];
	int i,j,n,k,index,d;
	cin>>s>>s1;
	cin>>s2;
	int count[26]={0},count1[26]={0};
	for(i=0;i<strlen(s2);i++)
	{
		if(s2[i]>='A' && s2[i]<='Z')
		{
			s3[i]=s2[i]+32;
			//s3[i]=s2[i];
		}
		else
		s3[i]=s2[i];
	}
	for(i=0;i<strlen(s);i++)
	count[s[i]-'a']=i;
	int l=strlen(s3);
	for(i=0;i<l;i++)
	{
		if(s3[i]>='a' && s3[i]<='z')
		{
			d=count[s3[i]-'a'];
			s4[i]=s1[d];
		}
		else
		s4[i]=s3[i];
		//cout<<s4[i];
	}
	for(i=0;i<l;i++)
	{
		if(s2[i]>='A' && s2[i]<='Z')
		{
			s4[i]-=32;
		}
	}
	cout<<s4;
}