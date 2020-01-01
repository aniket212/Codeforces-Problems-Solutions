#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int a[],long long int n,long long int sum)
{
	int i = 0;
 
    // represents second pointer
    int j = n - 1;
 
    while (i < j) {
 
        // If we find a pair
        if (a[i] + a[j] >= sum)
            return 1;
 
        // If sum of elements at current
        // pointers is less, we move toward
        // higher values by doing i++
        else if (a[i] + a[j] < sum)
            i++;
 
        // If sum of elements at current
        // pointers is more, we move toward
        // higher values by doing i++
        else
            j--;
    }
    return 0;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//long long int i,n1,n2,j,t=0,x,m,b=0,q,k,d,e,n,l,r,ans=0,flag=0,max1,max2;
	//int a,c;
	//cin>>a>>b>>c;
	//cin>>l;
	long long int n,flag=0,sum=0;
	cin>>n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int j=0;j<n;j++)
	cin>>b[j];
	sort(b,b+n);
	long long int d=solve(b,n,sum);
	if(d==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}