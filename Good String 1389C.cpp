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

int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction

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

      string s;
      cin>>s;

      int ans;
      ans=sz(s)-2;
      map<char,int>mp;

      for(int i=0;i<sz(s);i++)
      {
          mp[s[i]]++;

          ans=min(ans,sz(s)-mp[s[i]]);
      }

      for(int i=0;i<10;i++)
      {
          for(int j=0;j<10;j++)
          {
              int ln=0;
              bool f=true;

              for(int k=0;k<sz(s);k++)
              {
                  if(f and s[k]=='0'+i)
                  {
                      f=false;
                  }
                  else if(!f and s[k]=='0'+j)
                  {
                      f=true;
                      ln+=2;
                  }
              }

              ans=min(ans,sz(s)-ln);
          }
      }

      cout<<ans<<endl;
    }
    return 0;
}

