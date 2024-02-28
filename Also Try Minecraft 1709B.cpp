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
    ll n,m,i;
    cin>>n>>m;

    ll ar[n+2],p[n+2],s[n+2],pr[n+2],sf[n+2];

    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
    }

    p[1]=0;
    pr[0]=pr[1]=0;
    sf[n]=0;
    for(i=2; i<=n; i++)
    {
        if(ar[i-1]>ar[i])
        {
            p[i]=ar[i-1]-ar[i];
        }
        else
        {
            p[i]=0;
        }
        pr[i]=p[i]+pr[i-1];
    }

    s[n]=0;

    for(i=n-1; i>=1; i--)
    {
        if(ar[i+1]>ar[i])
        {
            s[i]=ar[i+1]-ar[i];
        }
        else
        {
            s[i]=0;
        }

        sf[i]=s[i]+sf[i+1];
    }

    while(m--)
    {
        ll a,b;
        cin>>a>>b;

        if(a<b)
        {
            cout<<pr[b]-pr[a]<<endl;
        }
        else
        {
            cout<<sf[b]-sf[a]<<endl;
        }
    }

    return 0;
}
