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

vi adj[200005];
ll vis[200006];
ll clr[200005];
bool f=true;

void dfs(ll node,int c)
{
    vis[node]=1;
    clr[node]=c;

    for(auto child:adj[node])
    {
        if(vis[child]==0)
        {
            dfs(child,c^1);
        }

        else
        {
            if(clr[node]==clr[child])
            {
                f=false;
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
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,i;
        cin>>n;

        map<ll, ll>mp;

        for(i=0; i<n; i++)
        {
            ll a,b;
            cin>>a>>b;
            mp[a]++,mp[b]++;
            if(a==b)
            {
                f=false;
            }
            else if(mp[a]>=3 or mp[b]>=3)
            {
                f=false;
            }

            adj[a].PB(b);
            adj[b].PB(a);


        }


        if(!f)
        {
            NO;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(vis[i]==0)
                {
                    dfs(i,0);
                }
            }


            if(f) YES;
            else NO;
        }

        for(i=0;i<=n;i++)
        {
            adj[i].clear();
            vis[i]=0;
            clr[i]=0;

        }
        f=true;
    }
    return 0;
}
