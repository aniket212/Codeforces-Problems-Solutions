#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long int i,j,t,a,b,c,ans,d,flag=0;
	cin>>c>>a>>b;
	for(i=0;i<=c/a;i++)
	{
		if((c-i*a)%b==0)
		{
			//cout<<"YES"<<endl;
			d=c-i*a;
			ans=d/b;
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"YES"<<endl;
		cout<<i<<" "<<ans;
	}
	else
	cout<<"NO"<<endl;
}