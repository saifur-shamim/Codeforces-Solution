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
        ll n,i;
        cin>>n;

        ll ar[n+2];

        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }

        if(n%2)
        {
            ll ans=0;

            for(i=2;i<=n;i+=2)
            {
                ans+=max(0LL,max(ar[i-1],ar[i+1])-ar[i]+1);
            }

            cout<<ans<<endl;
        }
        else
        {
            ll ans,p[n+2],s[n+2];
            p[0]=0;

            for(i=2;i<=n;i+=2)
            {
                p[i]=p[i-2]+max(0LL,max(ar[i-1],ar[i+1])-ar[i]+1);
            }
            s[n+1]=0;
            for(i=n-1;i>=1;i-=2)
            {
                s[i]=s[i+2]+max(0LL,max(ar[i-1],ar[i+1])-ar[i]+1);
            }

            ans=1e18;

            for(i=1;i<=n;i+=2)
            {
                ll x=p[i-1]+s[i+2];
                ans=min(ans,x);
            }

            cout<<ans<<endl;
        }
    }
    return 0;
}