#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long int i,j,t,n;
	cin>>n;
	long int max=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(max<i)
			max=i;
		}
	}
	cout<<max<<" "<<n/max;
}