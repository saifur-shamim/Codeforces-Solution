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

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

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

      ll n,m,i;
      cin>>n>>m;

      ll ar[n+2];

      ll pr[n+2]={0};

      ll mn=infll;
      for(i=1;i<=n;i++)
      {
          cin>>ar[i];

          pr[i]=pr[i-1]+ar[i];

          mn=min(mn,pr[i]);
      }

      if(mn==pr[m])
      {
          cout<<"0\n";
          continue;
      }


      mn=pr[m];

      priority_queue<ll> pq;

      ll ans=0;
      for(i=m;i>=1;i--)
      {
          if(pr[i]<mn)
          {
              while(!pq.empty() and pr[i]<mn)
              {
                  ll x=pq.top();
                  pq.pop();

                  mn-=(2*x);
                  ans++;
              }
          }

          pq.push(ar[i]);
      }


      mn=pr[m];

      priority_queue<ll,vector<ll> , greater<ll>> pq1;


      for(i=m+1;i<=n;i++)
      {
          pq1.push(ar[i]);

          if(pr[i]<mn)
          {
              while(!pq1.empty() and pr[i]<mn)
              {
                  ll x=pq1.top();
                  pq1.pop();

                  mn+=(2*x);
                  ans++;
              }
          }


      }

      cout<<ans<<endl;

    }

    return 0;
}

