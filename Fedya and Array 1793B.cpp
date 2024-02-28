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
#define     sz(x)     (ll)x.size()
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

        ll x,y;
        cin>>x>>y;

        if(abs(x-y)==1)
        {
            cout<<"3\n";
            vl v;
            v.PB(x);
            v.PB(y);
            sort(all(v));

            cout<<v[0]<<" "<<v[1]<<" "<<v[0]<<endl;
            continue;
        }

        if(y<=0)
        {
            vl v;
            /*ll n=x*2;
            n+=2*abs(y);

            ll ar[n+2]= {0};
            */
            ll cnt1=0,cnt2=0;
            ll i;

            for(i=2; cnt1<x; i+=2)
            {
                v.PB(0);
                v.PB(1);
                cnt1++;
            }

            for(; cnt2<abs(y); i+=2)
            {
                v.PB(0);
                v.PB(-1);
                cnt2++;
            }

            cout<<sz(v)<<endl;

            for(auto it:v)
            {
                cout<<it<<" ";
            }


        }
        else
        {
            vl v;

            for(ll i=y; i<=x; i++)
            {
                v.PB(i);
            }

            for(ll i=x-1; i>y; i--)
            {
                v.PB(i);
            }

            cout<<sz(v)<<endl;
            for(auto it:v)
            {
                cout<<it<<" ";
            }
        }

        cout<<endl;

    }
    return 0;
}

