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
const int Size=55;
vector<ll> adj[Size];
bool vis[Size];

ll Bigmod(ll a, ll b )
{
    if(b == 0) return 1;
    ll  x=Bigmod(a,b/2);
    x=(x*x);
    if(b%2==1)
        x=(x*a);
    return x;
}

void dfs(ll s)
{
    vis[s]=1;
    for(int i=0; i<adj[s].size(); i++)
    {
        if(!vis[adj[s][i]])
            dfs(adj[s][i]);
    }
}
int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    ll i,j,k;
    ll n,m;
    ll u,v;

    cin>>n>>m;

    if(n==1)
    {
        cout<<"1";
        return 0;
    }

    for(i=0; i<m; i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll x=0;
    memset(vis,0,sizeof(vis));
    for(i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            x++;
        }

    }

    cout<<Bigmod(2,n-x)<<endl;


    return 0;
}
