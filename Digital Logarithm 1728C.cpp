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

        priority_queue<ll> p1,p2;

        for(i=0; i<n; i++)
        {
            ll x;
            cin>>x;

            p1.push(x);
        }
        for(i=0; i<n; i++)
        {
            ll x;
            cin>>x;

            p2.push(x);
        }

        ll ans=0;

        while(!p1.empty() and !p2.empty())
        {
            ll a=p1.top();
            ll b=p2.top();

            if(a==b)
            {
                p1.pop();
                p2.pop();
            }
            else if(a>b)
            {
                p1.pop();
                ans++;

                string s=to_string(a);
                p1.push(sz(s));
            }
            else
            {
                p2.pop();
                ans++;

                string s=to_string(b);
                p2.push(sz(s));
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
