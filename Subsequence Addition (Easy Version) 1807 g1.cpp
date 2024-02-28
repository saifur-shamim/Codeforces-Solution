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

level:
    while(tc--)
    {

        ll n;
        cin>>n;
        ll sum=1;


        vl v(n+1);
        ll pr[n+2];
        pr[0]=1;

        v[0]=0;
        for(ll i=1 ; i<=n ; i++)
        {
            cin>>v[i];

        }
        sort(all(v));


        bool f=true;
        sum=0;


        for(ll i=1 ; i<=n ; i++)
        {
            sum+=v[i];
            pr[i]=sum;

        }
        if(n>=2 and (v[1]!=1 or v[2]!=1)) f=false;
        if(n==1 and v[1]!=1 ) f=false;
        for(ll i=3 ; i<=n ; i++)
        {
            if(v[i]>pr[i-1])
            {
                f=false;
                break;
            }
        }


        if(f) YES;
        else NO;

    }
    return 0;
}

/*
7
1 1 2 3 5 6 7

*/

