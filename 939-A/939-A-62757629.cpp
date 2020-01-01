#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,t,n,x,m;
    cin>>n;
    int graph[5001][5001];
    for(int i=1;i<=5000;i++)
    {
        for(int j=1;j<=5000;j++)
        graph[i][j]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        graph[i+1][x]=1;
    }
    int flag=0;
    //cout<<"Hello"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(graph[i][j]==1)
            {
                for(int k=1;k<=n;k++)
                {
                    if(graph[j][k]==1)
                    {
                        if(graph[k][i]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}