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
const int mx=10e5+4;
ll dis[mx];
vpi adj[mx];

void dijkstra(ll s)
{
    dis[s]=0;

    priority_queue<pll,vpl,greater<pll> > pq;

    pq.push({0,s});

    while(!pq.empty())
    {
        ll node=pq.top().S;
        ll curd=pq.top().F;

        pq.pop();

        if(dis[node]<curd) continue;

        for(auto it:adj[node])
        {
            ll child=it.F;
            ll  w=it.S;

            if(curd+w<dis[child])
            {
                dis[child]=curd+w;
                pq.push({dis[child],child});
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
      ll n,m,i,k;
      cin>>n>>m>>k;

      for(i=0;i<=n;i++)
      {
          dis[i]=infll;
      }
      for(i=0;i<m;i++)
      {
          int  u,v,w;
          cin>>u>>v>>w;

          adj[u].PB({v,w});
          adj[v].PB({u,w});
      }

      ll cnt=0;
      dijkstra(1);

      for(i=1;i<=k;i++)
      {
         ll  node,w;
          cin>>node>>w;

          if(dis[node]<=w) cnt++;
      }

      cout<<cnt<<endl;
    return 0;
}
