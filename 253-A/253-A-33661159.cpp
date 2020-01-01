#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,t,n,m,boys=0,girls=0;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>m;
	string s;
	if(n>=m)
	{
		for(i=1;i<=2*m;i++)
		{
			if(i%2!=0)
			{
				s+='B';
				boys++;
			}
			else if(i%2==0)
			{
				s+='G';
				//girls++;
			}	
		}
		for(i=1;i<=n-boys;i++)
		s+='B';
	}
	else if(m>n)
	{
		for(i=1;i<=2*n;i++)
		{
			if(i%2!=0)
			{
				s+='G';
				girls++;
			}
			else
			{
				s+='B';
			}
		}
		for(i=1;i<=m-girls;i++)
		s+='G';
	}
	cout<<s<<endl;
}