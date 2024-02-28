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
vpi ans;
map<pii,int>mp;

void dfs(int node,int col)
{
    vis[node]=true;

    for(auto child:adj[node])
    {
        int a;
        if(vis[child]==false)
        {
            if(col==-1 or col==5) a=2;
            else a=5;

            int x=min(node,child);
            int y=max(node,child);
            mp[{x,y}]=a;
            col=a;
            dfs(child,col);
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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i;
        cin>>n;

        for(i=0;i<=n;i++)
        {

            vis[i]=false;
            adj[i].clear();
        }

        ans.clear();
        mp.clear();
        bool f=true;
        for(i=1;i<n;i++)
        {
            int u,v;
            cin>>u>>v;

            adj[u].PB(v);
            adj[v].PB(u);
           int x=min(u,v);
           int y=max(u,v);
           ans.PB({x,y});

            if(sz(adj[u])>2) f=false;
            if(sz(adj[v])>2)   f=false;
        }

        if(f)
        {
            dfs(1,-1);

            for(i=0;i<sz(ans);i++)
            {
                int x=ans[i].F;
                int y=ans[i].S;
                cout<<mp[{x,y}]<<" ";
            }

            cout<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
