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


ll lcm(ll a,ll b)
{
    return ((a*b)/gcd(a,b));
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

          ll ar[n+2];

          map<ll,ll>mp1;
          for(i=1;i<=n;i++)
          {
              cin>>ar[i];
              mp1[ar[i]]++;
          }


          ll mx=0;



          for(i=1;i<=n;i++)
          {
              ll cmx=0;
              map<ll,ll> mp;
              //dbg(ar[i],i);

              for(ll j=1;j*j<=i;j++)
              {
                  //dbg(ar[j],i,j);


                  if(i%j==0)
                  {
                      cmx+=mp1[j];

                      if(j!=(i/j))
                      cmx+=mp1[i/j];
                  }


              }

              mx=max(mx,cmx);
          }

          cout<<mx<<endl;

    }
    return 0;
}

