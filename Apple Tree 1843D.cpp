///Bismillahir Rahmanir Rahim
///Happy Coding

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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

const ll mx=2e5+134;

vi adj[mx];
ll dis[mx],d[mx];
bool vis[mx];

void dfs(ll n)
{
    vis[n]=true;

    for(auto child:adj[n])
    {
        if(vis[child]==false)
        {

            dfs(child);
            dis[n]+=dis[child];
        }


    }

    if(d[n]==1 and n!=1)
    {
        dis[n]++;
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
    int tc;
    cin>>tc;

    while(tc--)
    {

        ll n,i;
        cin>>n;

        for(i=0; i<=n; i++)
        {
            adj[i].clear();
            vis[i]=false;
            dis[i]=0;
            d[i]=0;
        }
        for(i=1; i<n; i++)
        {
            ll u,v;
            cin>>u>>v;

            adj[u].PB(v);
            adj[v].PB(u);

            d[u]++;
            d[v]++;
        }

        dfs(1);


        ll q;
        cin>>q;

        while(q--)
        {
            ll u,v;
            cin>>u>>v;



           cout<<dis[u]*dis[v]<<endl;
        }
    }

    return 0;
}
/*
1
7
1 2
1 3
2 4
2 5
3 6
3 7
2
1 1
2 3
*/
