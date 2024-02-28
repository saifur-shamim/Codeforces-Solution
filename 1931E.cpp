#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

///order_of_key (val) : Number of items strictly smaller than val.
///find_by_order(x) : x-th element in a set (zero based index).

typedef  long long ll;
typedef  long int li;
typedef  unsigned long long ull;
typedef  double dl;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     pb        push_back
#define     dlt       pop_back
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
#define     nl        cout<<endl
#define     mone      cout<<"-1\n"
#define    For(i,a,b)  for(i = a; i <= b; i++)
#define    Forr(i,a,b)  for(i = a; i >= b; i--)

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

const int N=2e5+123;

vl adj[N];
int vis[N];

bool dfs(int node)
{
    vis[node]=1;

    for(int child: adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child)==true)return true;
        }
        else
        {
            if(vis[child]==1)return true;
        }
    }
    vis[node]=2;
    return false;
}

void solve()
{
    ll n,k,i;
    cin>>n>>k;


    for( i=0; i<=n; i++)
    {
        adj[i].clear();
        vis[i]=0;
    }
    vl v;

    for(ll i=0; i<k; i++)
    {

        ll a;
        for(ll j=0; j<n; j++)
        {
            cin>>a;

            v.pb(a);
        }

        for(ll l=2; l<n; l++)
        {
            adj[v[l-1]].pb(v[l]);
        }

        v.clear();

    }

    bool f=true;

    for( i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            if(dfs(i))
            {
                f=false;
                break;
            }
        }
    }



    if(!f)
        NO;
    else
        YES;
}

int main()
{

    faster;

    int tc;
    cin>>tc;

    while(tc--)
    {

        solve();

    }
    return 0;



}
