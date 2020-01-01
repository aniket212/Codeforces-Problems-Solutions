#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int i,j,t,n,m,k;
    cin>>n>>k;
    vector<int>arr(n);
    long long  int max1=0,min1=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<max1)
        max1=arr[i];
        if(min1>arr[i])
        min1=arr[i];
    }
    
    sort(arr.begin(),arr.end());
    if(k==n)
    {
        if(max1 == 1000000000)
        cout<<-1<<endl;
        else
        cout<<1000000000<<endl;
    }
    else if(k==0)
    {
        if(min1 == 1)
        cout<<-1<<endl;
        else
        cout<<1<<endl;
    }
    else
    {
        long long kth_element=arr[k-1];
        long long front=arr[k];
        if(arr[k]==arr[k-1])
        cout<<-1<<endl;
        else
        cout<<arr[k-1]<<endl;
    }
}