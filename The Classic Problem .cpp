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
const int mx=1e5+25;

vpl adj[mx];
ll dis[mx];

ll par[mx];

ll power(long long int base, long long int pow)
{
    long long int ans=1;
    while(pow>0)
    {

        if(pow%2==1) ans = (ans*base)%mod;
        base=(base*base)%mod;
        pow=pow/2;
    }
    return ans%mod;
}

void dijkstra(ll src,ll dst,ll n)
{
    for(ll i=1; i<=n; i++)
    {
        dis[i]==infll;
    }

    priority_queue<pll,vector<pll>,greater<pll> > pq;

    dis[src]=0;

    pq.push({0,src});

    while(!pq.empty())
    {
        ll curd=pq.top().F;
        ll u=pq.top().S;


        pq.pop();

        if(u==dst) return ;
        if(dis[u]<curd) continue;

        cout<<" curd = "<<curd<<endl;
        cout<<" u = "<<u<<endl;
        for(auto it:adj[u])
        {
            ll v=it.F;
            ll w=it.S;

            cout<<" v = "<<v<<endl;
            if(curd+w<dis[v])
            {
                dis[v]=curd+w;
                par[v]=u;

                pq.push({dis[v],v});
            }
        }
    }
}
int main()
{


    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */

    ll n,m,i;
    cin>>n>>m;
    cout<<n<<endl;

    for(ll i=1; i<=m; i++)
    {
        ll u,v,w1;

        cin>>u>>v>>w1;

        ll w=power(2,w1);

        cout<<"i = "<<i<<" w = "<<w<<endl;
        adj[u].PB({v,w});
        adj[v].PB({u,w});

    }

    ll src,dst;
    cin>>src>>dst;

    dijkstra(src,dst,n);

    cout<<"finished djkstra\n";
    if(dis[dst]==infll)
    {
        cout<<"-1\n";
        return 0;
    }


    vl v1;

    v1.PB(dst);

    ll node=par[dst];

    while(node!=src)
    {
        v1.PB(node);
        node=par[node];
    }

    v1.PB(src);

    cout<<dis[dst]<<endl;

    cout<<sz(v1)<<endl;

    for(auto it:v1)
    {
        cout<<it<<" ";
    }

    cout<<endl;


    return 0;
}

