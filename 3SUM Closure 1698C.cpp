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
level:
    while(tc--)
    {
        ll n,i;
        cin>>n;

       ll ar[n+2];
        map<ll,ll>mp;

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }

        sort(ar,ar+n);
        bool f=true;
       for(i=0;i<n-2;i++)
       {
           ll s=ar[i]+ar[i+1]+ar[i+2];

           if(!mp[s])
           {
               f=false;
               break;
           }
       }

       ll a1=ar[0]+ar[n-1]+ar[n-2];
       ll a2=ar[0]+ar[1]+ar[n-1];

       if(!mp[a1] or !mp[a2])
       {
           f=false;
       }

       if(f) YES;
       else NO;
    }
    return 0;
}
