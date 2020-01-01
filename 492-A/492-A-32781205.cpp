#include<iostream>
using namespace std;
int main(void)
{
	int i,j,t,n;
	cin>>n;
	long int sum=0,ans=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
		if((ans+sum)<=n)
		ans+=sum;
		//cout<<ans;
		else
		break;
	}
	cout<<i-1;
}