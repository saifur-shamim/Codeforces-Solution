///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;


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

        int mx=205;
        vi adj[mx];

        int n,m,i;
        cin>>n>>m;

        int cnt[n+2]= {0};

        for(i=1; i<=m; i++)
        {
            int u,v;
            cin>>u>>v;

            adj[u].PB(v);
            adj[v].PB(u);

            cnt[u]++;
            cnt[v]++;
        }

        int ans1,ans2;

        for(i=1; i<=n; i++)
        {


           if(cnt[i]==1) continue;
            ans1=cnt[i];

            //dbg(i,ans1);
            int tmp=cnt[adj[i][0]];

            bool f=true;

            for(auto child : adj[i])
            {
                if(cnt[child]!=tmp)
                {
                    f=false;
                    break;
                }
            }

            if(f)
            {
                ans2=tmp-1;
                break;
            }
        }

        cout<<ans1<<" "<<ans2<<endl;
    }


    return 0;
}

