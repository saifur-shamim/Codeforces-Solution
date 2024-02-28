#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;

#define ll                                  long long int
#define Faster                              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




// sieve starts
bool mark[N+5];
vector<ll>primes;
void sieve()
{
    memset(mark,true,sizeof(mark));
    mark[0]=0,mark[1]=0,mark[2]=1;
    for(ll i=4; i<=N; i+=2LL)
    {
        mark[i]=0;
    }
    for(ll i=3; i*i<=N; i+=2LL)
    {
        if(mark[i])
        {
            for(ll j=i*i; j<=N; j+=i)
            {
                mark[j]=0;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=N; i+=2)
    {
        if(mark[i])
        {
            primes.push_back(i);
        }
    }
}
// sieve ends



int main()
{
    Faster;
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }




        map<ll,int> freq;

        for(int i=0; i<n; i++)
        {
            int x=a[i];
            for(ll pp=0; primes[pp]*primes[pp]<=x; pp++)
            {
                if(x%primes[pp]==0)
                {
                    freq[primes[pp]]++;
                    while(x%primes[pp]==0)
                    {
                        x/=primes[pp];
                    }
                }
            }
            if(x!=1)
            {
                freq[x]++;
            }
        }

        bool ok=false;
        for(auto p:freq)
        {
            if(p.second>1)
            {
                ok=true;
                break;
            }
        }

        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
