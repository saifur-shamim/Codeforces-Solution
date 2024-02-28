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
        ll n, m ;
        cin>>n;
        //string s ; cin>>s;

        ll ans=1;

        ll ara[n+2];
        set<ll>st;

        for(ll i=1 ; i<=n ; i++)
        {
            cin>>ara[i];
            st.insert(ara[i]);
        }

        ll l=1,r=n;
        while(st.size())
        {
            auto x=*st.begin();
            auto y=*st.rbegin();
            //cout<<l<<' '<<r<<endl;
            //cout<<x<<' '<<y<<' ';
            if(x==ara[l])
            {
                ++l;
                st.erase(x);
                //cout<<"1st"<<endl;
            }
            else if(y==ara[r])
            {
                --r;
                st.erase(y);
                //cout<<"2nd"<<endl;
            }
            else if(x==ara[r])
            {
                --r;
                st.erase(x);
                //cout<<"3rd"<<endl;
            }
            else if(y==ara[l])
            {
                ++l;
                st.erase(y);
                //cout<<"4th"<<endl;
            }
            else
            {
                ans=0;
                //cout<<"5th"<<endl;
                break;
            }
        }
        if(ans) cout<<-1<<endl;
        else cout<<l<<' '<<r<<endl;

    }
    return 0;
}

