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

      ll n,q,i;
      cin>>n>>q;

      ll pr[n+2],sr[n+2];

      ll ar[n+2];

      pr[0]=0;
      for(i=1;i<=n;i++)
      {
          cin>>ar[i];

          pr[i]=pr[i-1]+ar[i];
      }


      sr[n+1]=0;

      for(i=n;i>=1;i--)
      {
          sr[i]=sr[i+1]+ar[i];
      }

      ll l,r,k;

      while(q--)
      {
          cin>>l>>r>>k;

          ll dif=(r-l)+1;

          ll sum=0;
          sum=dif*k;

          if(r+1<=n)
          {
              sum+=sr[r+1];
          }

          if(l>=1-1)
          {
              sum+=pr[l-1];
          }

          //dbg(sum);
          if(sum%2) Yes;
          else No;
      }

    }

    return 0;
}

