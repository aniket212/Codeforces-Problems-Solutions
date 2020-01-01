#include<iostream>
using namespace std;
int main(void)
{
	int i,j,t,n,a,b,c,ans=0;
	cin>>a>>b>>c;
	for(i=a;i<=c;i+=a)
	{
		if(i%b==0)
		ans++;
	}
	cout<<ans;
}