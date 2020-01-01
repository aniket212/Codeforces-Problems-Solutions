#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long int i,j,n,t,index=0,sum=0;
	cin>>n>>t;
	long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
	
		
			sum+=(86400-a[i]);
			if(sum>=t)
			{
				index=i+1;
				break;
			}
		
	}
	if(index)
	cout<<index;
}