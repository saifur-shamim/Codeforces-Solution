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


int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;
const int mx=1e4+24;

int n,m;
int ans;
bool vis[mx][mx];
vi ar[mx];

void dfs(int x,int y)
{
    vis[x][y]=true;
    ans+=ar[x][y];

    for(int k=0;k<4;k++)
    {
        int x1=x+dx[k];
        int y1=y+dy[k];

        if(x1>=0 and x1<n and y1>=0 and y1<m and vis[x1][y1]==false and ar[x1][y1]!=0)
        {
            dfs(x1,y1);
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


      cin>>n>>m;

      int i,j;

      for(i=0;i<n;i++)
      {
          ar[i].assign(m,0);
          for(j=0;j<m;j++)
          {
              cin>>ar[i][j];
              vis[i][j]=false;
          }
      }

      int res=0;

      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              if(ar[i][j]!=0 and !vis[i][j])
              {
                  ans=0;

                  dfs(i,j);

                  res=max(res,ans);
              }
          }
      }

      cout<<res<<endl;

    }

    return 0;
}

