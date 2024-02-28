///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;
typedef  long int li;
typedef  double dl;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     PB        push_back
#define     MP        make_pair
#define     F         first
#define     S         second
#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    int tc;
    cin>>tc;

    while(tc--)
    {
        ll n,m,k,i;
        cin>>n>>m>>k;

        ll ar[m+2];

        map<ll,ll>mp;

        for(i=0; i<m; i++)
        {
            cin>>ar[i];

            mp[ar[i]]++;
        }

        sort(ar,ar+m);


        if(n%k==0)
        {
            if(ar[m-1]<=n/k)
            {
                YES;
            }
            else NO;
        }
        else
        {
            ll val=n/k;
            val++;

            ll freq=n%k;

            if(ar[m-1]<val)
            {
                YES;
            }
            else if(ar[m-1]==val and mp[ar[m-1]]<=freq)
            {
                YES;
            }
            else NO;
        }

    }
    return 0;
}

