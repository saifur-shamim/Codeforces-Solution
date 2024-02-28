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

      vpl v,v2;
      ll ar[n+3];

      for(i=1;i<=n;i++)
      {
          cin>>ar[i];

          v.PB({ar[i],i});
      }

      sort(all(v));

      for(i=0;i<n-1;i++)
      {
          ll a=v[i].F;
          ll b=v[i+1].F;

          ll ind=v[i+1].S;
          if(b%a==0) continue;

          ll div=b/a;

          div++;

          ll add=(div*a)-b;

          //cout<<" a = "<<a<<" b = "<<b<<" div = "<<div<<" add = "<<add<<endl;
          while(add)
          {
              if(add<=b)
              {
                  v2.PB({ind,add});
                  add=0;
              }
              else
              {
                  v2.PB({ind,add-b});
                  add-=b;
              }
          }

          v[i+1].F+=(div*a)-b;
      }

      cout<<sz(v2)<<endl;

      for(auto it:v2)
      {
          cout<<it.F<<" "<<it.S<<endl;
      }
    }
    return 0;
}

