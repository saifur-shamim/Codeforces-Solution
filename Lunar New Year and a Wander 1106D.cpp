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

const int lm=1e5+2;
vi adj[lm];
bool vis[lm];
priority_queue<int> pq;
vi ans;
void bfs()
{

    pq.push(-1);
    vis[1]=true;
    while(!pq.empty())
    {
        int top=(-1)*pq.top();
        pq.pop();
        ans.PB(top);
        for(auto child:adj[top])
        {
            if(vis[child]==false)
            {
                pq.push((-1)*child);
                vis[child]=true;
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
    int n,m,i;
    cin>>n>>m;



    for(i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].PB(v);
        adj[v].PB(u);

    }

    bfs();

    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
