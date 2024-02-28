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
string s;
int solve(int l,int r,char x)
{
    if(l==r) return s[l]!=x;

    int cnt1=0;

    for(int i=l;i<=(l+r)/2;i++) if(s[i]!=x) cnt1++;
    ll u=solve(((l+r)/2)+1,r,x+1);

    int cnt2=0;

    for(int i=(l+r)/2+1;i<=r;i++) if(s[i]!=x) cnt2++;

    ll v=solve(l,(l+r)/2,x+1);

    return min(cnt1+u,v+cnt2);
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

      int n,i;
      cin>>n;
      cin>>s;

      cout<<solve(0,n-1,'a')<<endl;
    }
    return 0;
}

