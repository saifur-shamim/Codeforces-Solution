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

int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1}; //8 direction

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

lev:
    while(tc--)
    {

        ll n,m,d;
        cin>>n>>m>>d;

        ll pr[n+2],ar[m+2],pos[n+2],i;

        for(i=1; i<=n; i++)
        {
            cin>>pr[i];

            pos[pr[i]]=i;
        }

        for(i=1; i<=m; i++)
        {
            cin>>ar[i];
        }

        ll ans=infll;

        for(i=1; i<m; i++)
        {
            ll a1=pos[ar[i]];
            ll a2=pos[ar[i+1]];

            if(a2<a1 or a1+d<a2)
            {
                cout<<"0\n";
                goto lev;
            }
            else
            {
                ans=min(ans,a2-a1);
            }
        }

        if(d+1<n)
        {
            for(i=1;i<m;i++)
            {
                ans=min(ans,(d+1)-(pos[ar[i+1]]-pos[ar[i]]));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

