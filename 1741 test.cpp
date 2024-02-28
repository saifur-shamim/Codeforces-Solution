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
        ll n;
        cin>>n;
        ll ara[n+6];
        ara[0]=0ll;
        for(ll i=1; i<=n; i++)
        {
            cin>>ara[i];
            ara[i]+= ara[i-1];
        }
        ll res=n;
        ll a,b;
        for(ll i=1; i<=n; i++)
        {
            cout<<" i = "<<i<<endl;

        cout<<" res "<<res<<endl;
            a=b=i;
            for(ll j=i+1; j<=n; j++)
            {
                if(ara[j]-ara[a]==ara[i])
                {
                    ll baki=j-a;
                    b=max(b,baki);
                    a=j;
                }


            }

            if(a!=n) continue;
            res=min(res,b);

        }
        printf("%lld",res);
        puts("");
    }

    return 0;
}
