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

        int n,i;
        cin>>n;

        vi v1,v2;

        int p1=2*n,p2=2;

        v1.PB(p1);
        v1.PB(p2);

        p1=n+1;
        p2=3;

        for(int i=2; i<=n/2 ; i++)
        {
            v1.PB(p1);
            v1.PB(p2);

            p1++;
            p2++;
        }



        for(int i=2; i<=n/2; i++)
        {
            v2.PB(p2);
            v2.PB(p1);

            p1++;
            p2++;
        }

        v2.PB(1);
        v2.PB(2*n -1);

        for(auto it:v1)
        {
            cout<<it<<" ";
        }

        cout<<endl;

        for(auto it:v2)
        {
            cout<<it<<" ";
        }

        cout<<endl;
    }

    return 0;
}

