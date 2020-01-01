#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,t,n,m,l;
    cin>>t;
    if(t>26)
    {
        cout<<-1<<endl;
        exit(0);
    }
    string s;
    cin>>s;
    int count[26]={0};
    
    for(int i=0;i<s.length();i++)
    count[s[i]-'a']++;
    
    int distinct=0,dup=0,flag=0;
    for(int i=0;i<26;i++)
    {
        if(count[i] > 0)
        distinct++;
    }
    if(distinct==26)
    {
        for(int i=0;i<26;i++)
        {
            if(count[i] > 1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<-1<<endl;
        else
        cout<<0<<endl;
    }
    else
    {
        int count1=0;
        int count_one=0;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(count[i]>1)
            ans=ans+(count[i]-1);
        }     
        if(ans<26)
        cout<<ans<<endl;
        else
        cout<<-1<<endl;
    }
}