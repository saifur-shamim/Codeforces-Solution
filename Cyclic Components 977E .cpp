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
int n,m,cnt;
vi adj[lm];
bool vis[lm];
vi v;
void dfs(int node)
{

    vis[node]=true;
    v.PB(node);
    for(auto child:adj[node])
    {
        if(vis[child]==false)
        {

            dfs(child);
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

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].PB(v);
        adj[v].PB(u);
    }

    for(int i=1; i<=n; i++)
    {
        v.clear();
        if(vis[i]==false)
        {

            dfs(i);
            bool f=true;
            for(auto it:v)
            {
                if(sz(adj[it])!=2)
                {
                    f=false;
                    break;
                }
            }

            if(f) cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
