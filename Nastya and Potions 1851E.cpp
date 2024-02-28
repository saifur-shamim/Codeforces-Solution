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

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

const int mx=2e5+234;

vl adj[mx],cst;
vector<bool> vis;

void dfs(int node)
{
    vis[node]=true;

    bool f=false;

    ll sum=0;

    for(auto child : adj[node])
    {
        f=true;
        if(vis[child]==false)
        {
            dfs(child);
        }

        sum+=cst[child];
    }

    if(!f)
    {
        sum=inf;
    }

    cst[node]=min(cst[node],sum);
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

        ll n,k,i;
        cin>>n>>k;


       cst.assign(n+2,inf);

       vis.assign(n+2,false);

        for(i=1; i<=n; i++)
        {
            cin>>cst[i];

            adj[i].clear();
        }


        for(i=1;i<=k;i++)
        {
            int p;cin>>p;

            cst[p]=0;
        }

        for(i=1; i<=n; i++)
        {
            ll koyta;
            cin>>koyta;

           for(int j=1;j<=koyta;j++)
           {
               int v;
               cin>>v;

               adj[i].PB(v);
           }
        }

        for(i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }

        for(i=1;i<=n;i++)
        {
            cout<<cst[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

