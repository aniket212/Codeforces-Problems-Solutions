#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char s[20001];
	char s1[20001];
	int p;
	cin>>p;
	cin>>s;
	int l=strlen(s);
	if(p==1)
	cout<<s;
	
	else if(l%2==0)
	{
		for(int i=0,k=1,m=l/2;i<l && k<=l/2+1 && m<l;i++)
		{
				if(i==0)
				{
					s1[l/2-k]=s[i];
					k++;		
				}	
				else if(i%2!=0)
				{
					s1[m]=s[i];
					m++;
				}
				else if(i%2==0 && i!=0)
				{
					s1[l/2-k]=s[i];
					k++;
				}
		}	
		s1[l]='\0';
	}
	else if(l%2!=0)
	{
			for(int i=0,k=1,m=l/2+1;i<l && k<=l/2+1 && m<l;i++)
		{
				if(i==0)
				{
					s1[l/2]=s[i];		
				}	
				else if(i%2==0 && i!=0)
				{
					s1[m]=s[i];
					m++;
				}
				else if(i%2!=0)
				{
					s1[l/2-k]=s[i];
					k++;
				}
		}	
		s1[l]='\0';
	}
	cout<<s1;
}