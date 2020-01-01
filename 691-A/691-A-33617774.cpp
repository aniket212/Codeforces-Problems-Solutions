#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,j,x,n,t,zero=0,one=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		zero++;
		else
		one++;
	}
	if(zero==1 && n!=1)
	cout<<"YES"<<endl;
	else if(zero==0 && n==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}