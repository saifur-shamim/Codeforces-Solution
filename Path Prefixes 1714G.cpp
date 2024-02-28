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
const ll s=2e5+2;
vl v;
vl adj[s],dis1[s],dis2[s];
ll dis[s],r[s],disb[s],vis[s];

void dfs(ll node,ll p,ll sum)
{
   // pf("node = %lld  parent = %lld sum = %lld\n",node,p,sum);
    vis[node]=1;
  //  pf("sz v = %lld\n",sz(v));
  /*
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;  */

    if(node!=1)
    {
        ll low=0,high=sz(v)-1;
        ll indx=-1;
        while(low<=high)
        {
            ll mid=(low+high)/2;

            if(v[mid]<=sum)
            {
                indx=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        if(indx!=-1)
        {
            r[node]=indx+1;
        }
        else r[node]=0;
    }


    for(ll i=0; i<sz(adj[node]); i++)
    {
        ll child=adj[node][i];
        if(vis[child]==0)
        {
            if(v.empty())
            {
                v.PB(dis2[node][i]);
            }
            else
            {
                v.PB(v.back()+dis2[node][i]);
            }
            dfs(child,node,sum+dis1[node][i]);
            v.pop_back();
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

        for(i=2; i<=n; i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            adj[i].PB(a);
            adj[a].PB(i);
            dis1[i].PB(b);
            dis1[a].PB(b);
            dis2[i].PB(c);
            dis2[a].PB(c);
        }

        dfs(1,-1,0);

        for(i=2; i<=n; i++)
        {
            cout<<r[i]<<" ";
            adj[i].clear();

            dis1[i].clear();

            dis2[i].clear();

            r[i]=0;
            vis[i]=0;

        }
        for(i=0; i<2; i++)
        {
            adj[i].clear();


            dis1[i].clear();

            dis2[i].clear();

            r[i]=0;
            vis[i]=0;

        }

        cout<<endl;
    }

    return 0;
}
