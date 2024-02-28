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
        ll h1,h2,a1,a2,k,w,a;

        cin>>h1>>a1>>h2>>a2>>k>>w>>a;


        bool f=false;

        for(ll i=0; i<=k; i++)
        {

            ll h3=h1+(i*a);

            ll a3=a1+((k-i)*w);

            ll x=h2/a3;
            if(h2%a3!=0) x++;

            ll y=h3/a2;

            if(h3%a2!=0) y++;

            if(x<=y)
            {
                f=true;
                break;
            }

        }

        if(f)
        {
            YES;
           // cout<<"YES\n";
        }
        else
        {
            NO;
            //cout<<"NO\n";
        }

    }

    return 0;
}
