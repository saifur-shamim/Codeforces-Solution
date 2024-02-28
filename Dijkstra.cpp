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
const int mx=1e5+2;
ll n,m;
ll dis[mx];
vpl adj[mx];
int par[mx];

void dijkstra(ll s,ll n)
{
    for(ll i=0; i<=n; i++)
    {
        dis[i]=infll;
    }

    dis[s]=0;
    priority_queue<pll,vpl,greater<pll> > pq;

    pq.push({0,s});

    while(!pq.empty())
    {
        ll node=pq.top().S;
        ll curd=pq.top().F;
        pq.pop();

        if(curd>dis[node]) continue;

        for(auto it:adj[node])
        {
            ll child=it.F;
            ll w=it.S;

            if(curd+w<dis[child])
            {
                dis[child]=curd+w;
                par[child]=node;
                pq.push({dis[child],child});
            }
        }
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
    cin>>n>>m;
    ll i;

    for(i=1; i<=m; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].PB({v,w});
        adj[v].PB({u,w});
    }

    dijkstra(1,n);

    if(dis[n]==infll)
    {
        cout<<"-1\n";
        return 0;
    }

    vl ans;
    ans.PB(n);

    while(par[n]!=0)
    {
        ans.PB(par[n]);
        n=par[n];
    }

    for(ll i=sz(ans)-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    return 0;
}
