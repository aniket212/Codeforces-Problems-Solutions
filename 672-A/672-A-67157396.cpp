#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,t,n,m;
    int temp=1;
    string s="1";
    while(s.length()<=1000)
    {
        temp=temp+1;
        s=s+to_string(temp);
    }
    cin>>n;
    cout<<s[n-1]<<endl;
}