#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int i,j,t,n,m,x;
    cin>>n>>m;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    unordered_map<int,bool>mp;
    int dp[n+1];
    dp[n]=1;
    mp[arr[n]]=true;
    dp[0]=0;
    for(int i=n-1;i>=1;i--)
    {
        if(mp.find(arr[i])!=mp.end())
        dp[i]=dp[i+1];
        else
        {
            mp[arr[i]]=true;
            dp[i]=dp[i+1]+1;
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cout<<dp[x]<<endl;
    }
}