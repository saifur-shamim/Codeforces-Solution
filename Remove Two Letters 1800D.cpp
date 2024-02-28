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

      ll  n,i;
      cin>>n;

      string s;
      cin>>s;

      vector<char> v1(n+2),v2(n+2);

      v1[0]=s[0];

      v2[n-1]=s[n-1];
      ll j;
      for(i=1,j=n-2;i<n and j>=0;i++,j--)
      {
          v1[i]=v1[i-1];
          v1[i]+=s[i];

          //cout<<v1[i]<<endl;

          v2[j]=v2[j+1];
          v2[j]+=s[j];

          //cout<<" v2 = "<<v2[j]<<endl;
      }

      set<string> st;

      for(i=0;i<n-1;i++)
      {
          string s1="";
          string s2="";
          if(i>=1)
          {
              s1=v1[i-1];
          }

          if(i+2<n)
          {
              s2=v2[i+2];
          }

          reverse(s2.begin(),s2.end());

          s1+=s2;

          //cout<<"i = "<<i<<endl;

          //cout<<" s1 = "<<s1<<endl;

          st.insert(s1);
      }

      cout<<sz(st)<<endl;
    }

    return 0;
}

