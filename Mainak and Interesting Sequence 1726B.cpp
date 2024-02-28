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
        ll n,m;
        cin>>n>>m;
        if(n>m) printf("No\n");
        else if(n%2==0 and (m&1)) printf("No\n");
        else if(n&1)
        {
            printf("Yes\n");
            cout<<m-n+1<<' ';
            for(ll i=1 ; i<n ; i++) cout<<1<<' ';
            cout<<endl;
        }
        else
        {
            printf("Yes\n");
            ll ase = m - n +2;
            cout<<ase/2<<' '<<ase/2<<' ';
            for(ll i=1 ; i<=n-2 ; i++) cout<<1<<' ';
            cout<<endl;

        }
    }
    return 0;
}
