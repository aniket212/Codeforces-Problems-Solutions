#include <bits/stdc++.h>
            using namespace std;

            #define fill(a,val) memset(a, (val), sizeof a)
            #define pb push_back
            #define lli long long int
            #define scantype int
            #define endl "\n"
            #define unique(x) x.erase(unique(x.begin(),x.end()), x.end())
            #define sort_f(x)  sort(x.begin(),x.end());
            #define sort_r(x)  sort(x.rbegin(),x.rend());

            lli MOD  = 1000000007;
            lli inf = 1e15;

            void scan(scantype &x);
            lli powermod(lli _a,lli _b,lli _m){lli _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
            lli string_to_number(string s){lli x=0; stringstream convert(s); convert>>x; return x;}
            lli add(lli a,lli b){lli x = (a+b)%MOD; return x; }
            lli mul(lli a,lli b){lli x = (a*b)%MOD; return x; }
            lli sub(lli a,lli b){lli x = (a-b+MOD)%MOD; return x; }
            lli divi(lli a,lli b){lli x = a;lli y = powermod(b,MOD-2,MOD);lli res = (x*y)%MOD;return res;}


            int main()
            {
                ios_base::sync_with_stdio(false);
                cin.tie(NULL);

                lli y,k,n;
                cin>>y>>k>>n;
                lli temp=y;
                y=y-(y%k)+k;
                vector<lli> arr;
                for(lli i=y;i<=n;i+=k)
                {
                    arr.pb(i-temp);
                }
                if((int)arr.size()==0)
                {
                    cout<<-1;
                }
                else
                {
                    for(int i=0;i<(int)arr.size();i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                }

                return 0;
            }