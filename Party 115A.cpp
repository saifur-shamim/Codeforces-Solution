///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;
const int mx=2e3+5;

vi adj[mx];

bool vis[mx];
int lev[mx];
int ans=0;
void bfs(int node)
{

    queue<int> q;
    q.push(node);

    lev[node]=1;
    vis[node]=true;

    while(!q.empty())
    {

        int tp=q.front();
        q.pop();

        ans=max(ans,lev[tp]);
        for(auto child:adj[tp])
        {
            if(vis[child]==false)
            {
                q.push(child);
                lev[child]=lev[tp]+1;
                vis[child]=true;

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
    int n,i;
    cin>>n;

    vi v;
    for(i=1; i<=n; i++)
    {
        int x;
        cin>>x;

        if(x!=-1)
        {
            adj[x].PB(i);
            adj[i].PB(x);
        }
        else{
            v.PB(i);
        }

    }

    for(i=0; i<sz(v); i++)
    {
        if(vis[v[i]]==false)
        {
            bfs(v[i]);
        }
    }

    cout<<ans<<endl;

    return 0;
}
