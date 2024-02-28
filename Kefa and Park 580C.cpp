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
const int lm=2e5+2;

vi adj[lm];
bool vis[lm];
int clr[lm];
int mx=0,m;
int cnt=0;
void dfs1(int node,int par,int c)
{
    if(clr[node]==1) c++;
    else c=0;


    for(auto child :adj[node])
    {
        if(child==par)
        {
           if(sz(adj[node])==1)
           {
               if(c<=m) cnt++;
           }
           else
           {
           continue;
           }
        }
        else
        {
           if(c<=m) dfs1(child,node,c);
        }
    }
}
/*void dfs(int node,int d)
{
    vis[node]=true;

    if(mx<d)
    {
        mx=d;
    }

    for(auto child:adj[node])
    {
        if(vis[child]==false)
        {
            dfs(child,d+1);
        }
    }
} */

int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    int n,i;
    cin>>n>>m;

    for(i=1; i<=n; i++)
    {
        cin>>clr[i];
    }

    for(i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].PB(v);
        adj[v].PB(u);
    }

    //dfs(1,0);
    dfs1(1,-1,0);
    cout<<cnt<<endl;

    return 0;
}
