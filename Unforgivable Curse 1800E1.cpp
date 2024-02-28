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

vector<int> par;
vector<int> sz;

int find_par ( int u )
{
    if ( u == par[u] ) return u;
    return par[u] = find_par ( par[u] );
}

void Union( int u, int v )
{
    if ( sz[u] < sz[v] ) swap ( u, v );
    par[v] = u;
    sz[u] += sz[v];
}

int main()
{

    faster;
    int tc;
    cin>>tc;
    while(tc--)
    {

        int n,k;
        cin>>n>>k;

        for ( int i = 0; i <= n; i++ )
        {
            par.PB(i);
        }

        sz.resize( n+1, 1 );

        string s,t;
        cin>>s>>t;

        s='#'+s;
        t='#'+t;
        for ( int i = 1; i <=n; i++ )
        {
            if(i+k<=n)
            {
                int ur=find_par(i);
                int vr=find_par(i+k);

                if(ur!=vr)
                {
                    Union(ur,vr);
                }
            }

            if(i+k+1<=n)
            {
                int ur=find_par(i);
                int vr=find_par(i+k+1);

                if(ur!=vr)
                {
                    Union(ur,vr);
                }
            }
        }

        map<int,string> ch[2];

        set<int>rt;

        for(int i=1; i<=n; i++)
        {
            int r=find_par(i);

            ch[0][r].PB(s[i]);
            ch[1][r].PB(t[i]);

            rt.insert(r);
        }

        bool f=true;

        for(auto it:rt)
        {
            sort(ch[0][it].begin(),ch[0][it].end());
            sort(ch[1][it].begin(),ch[1][it].end());

            if(ch[0][it]!=ch[1][it])
            {
                f=false;
                break;
            }
        }

        if(f) Yes;
        else No;

        par.clear();

    }
    return 0;
}

