#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,t,n,m,k;
    //cin>>t;
    //while(t--)
    //{
        string password;
        bool is_penalty=true;
        cin>>n>>k;
        if(k>=n)
        is_penalty=false;
        string s[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        cin>>password;
        int length_pass=password.length();
        vector<string>vec[1001];
        vec[0].push_back(" ");
        for(int i=0;i<n;i++)
        {
            int length=s[i].length(); 
            vec[length].push_back(s[i]); 
        }
        if(!is_penalty)
        {
            int best_case=0,worst_case=0;
            for(int i=1;i<length_pass;i++)
            best_case=best_case + vec[i].size();
            best_case+=1;
            worst_case=best_case + vec[length_pass].size()-1; 
            cout<<best_case<<" "<<worst_case<<endl;     
        }
        else
        {
            int best_case=0,worst_case=0;
            for(int i=1;i<length_pass;i++)
            best_case=best_case + vec[i].size(); 
            int total_penalties=best_case/k;
            best_case=best_case + 5*total_penalties;
            best_case+=1;
            for(int i=1;i<=length_pass;i++)
            worst_case = worst_case + vec[i].size();
            worst_case-=1;
            int total_penl_worse=worst_case/k;
            worst_case=worst_case + 5*total_penl_worse; 
            cout<<best_case << " "<<worst_case+1<<endl;
        } 
}