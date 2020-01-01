#include<bits/stdc++.h>
using namespace std;
int main(void)
{
		int i,j,t,sum=0,n,x,y,sum1=0,flag1=0,flag=0;
		char s[1001];
		cin>>x;
		cin>>s;
		int l=strlen(s);
		for(i=0;i<l/2;i++)
		{
			if(s[i]=='4' || s[i]=='7')
			{
				sum+=(s[i]-'0'+1);
			}
			else
			{
				flag=1;
				break;
			}
		}
		for(i=l/2;i<l;i++)
		{
			if(s[i]=='4' || s[i]=='7')
			sum1+=(s[i]-'0'+1);
			else
			{
				flag1=1;
				break;
			}
		}
		if(flag==1 || flag1==1)
		cout<<"NO"<<endl;
		else if(sum==sum1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
}