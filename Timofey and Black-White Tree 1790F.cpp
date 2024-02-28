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

int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1}; //8 direction

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

const int mx =2e5+24;

ll dis[mx];
vl adj[mx];

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


        ll n,c0,i,j;
        cin>>n>>c0;



        ll ar[n+2];

        for(i=1; i<n; i++)
        {
            cin>>ar[i];

        }


        for(i=1;i<=n;i++)
        {
            adj[i].clear();
        }

        fill(dis,dis+n+1,1e9);

        for(i=1; i<n; i++)
        {
            ll  u,v;
            cin>>u>>v;

            adj[u].PB(v);
            adj[v].PB(u);
        }

        ll ans=infll;

        queue<ll> q;
        q.push(c0);
        dis[c0]=0;

        while(!q.empty())
        {
            ll node=q.front();
            q.pop();

            for(auto it:adj[node])
            {
                if(dis[it]==1e9)
                {
                    dis[it]=dis[node]+1;
                    q.push(it);
                }
            }
        }


        for(i=1; i<n; i++)
        {
            ans=min(ans,dis[ar[i]]);

            cout<<ans<<" ";

            q.push(ar[i]);
            dis[ar[i]]=0;

            while(!q.empty())
            {
                ll node=q.front();
                q.pop();

                if(dis[node]==ans) continue;

                for(auto it:adj[node])
                {
                    if(dis[it]>dis[node]+1)
                    {
                        dis[it]=dis[node]+1;
                        q.push(it);
                    }
                }
            }
        }

        cout<<endl;


    }
    return 0;
}

