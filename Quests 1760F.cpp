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

      ll n,c,d,i;
      cin>>n>>c>>d;

      vi v(n);

      for(i=0;i<n;i++)
      {
          cin>>v[i];
      }


      sort(v.rbegin(),v.rend());

      ll low=-1,high=d+1;

      while(low<high)
      {
          ll mid=(low+high+1)/2;
          ll sum=0;
          for(i=0;i<d;i++)
          {
              ll ind=i%(mid+1);

              if(ind<n)
              {
                  sum+=v[ind];
              }
          }

          if(sum>=c)
          {
              low=mid;
          }
          else
          {
              high=mid-1;
          }
      }

      if(low==d+1)
      {
          cout<<"Infinity\n";

      }
      else if(low==-1)
      {
          cout<<"Impossible\n";
      }
      else cout<<low<<endl;
    }
    return 0;
}

