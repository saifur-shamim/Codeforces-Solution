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
const int mx=2e5+20;
vi adj[mx];
vector<vi> v;
vi v1;
bool vis[mx];
void dfs(int node)
{
    vis[node]=true;

    v1.PB(node);

    for(auto child:adj[node])
    {
        if(vis[child]==false)
        {
            dfs(child);
        }
    }

    if(!v1.empty())
    {

    v.PB(v1);
    v1.clear();

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
        int n,i;
        cin>>n;
        v1.clear();
        v.clear();

        for( i=1; i<=n; i++)
        {
            adj[i].clear();
            vis[i]=false;
        }

        int rt;
        for(i=1; i<=n; i++)
        {
            int u;
            cin>>u;

            if(i==u)
            {
                rt=i;
                continue;
            }

            adj[i].PB(u);
            adj[u].PB(i);
        }

        dfs(rt);

        cout<<sz(v)<<endl;

        for(auto it:v)
        {
            cout<<sz(it)<<endl;

            for(auto it1:it)
            {
                cout<<it1<<" ";
            }

            cout<<endl;
        }

        cout<<endl;

    }
    return 0;
}
