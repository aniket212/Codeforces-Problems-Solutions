#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,a,b,c,flag=0;
	cin>>a>>b>>c;
	for(i=0;i<=5000;i++)
	{
		for(j=0;j<=5000;j++)
		{
			if(a*i+b*j==c)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		break;
	}
	if(flag==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;	
}