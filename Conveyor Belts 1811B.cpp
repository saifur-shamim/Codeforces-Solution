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


int solve(int n,int x,int y)
{


    bool f=false;

    int ans=-1;

    if(x<=n/2 and f==false)
    {


        int y1=(n-x)+1;

        if(y>=x and y<=y1)
        {

            ans=x;
            f=true;
        }
    }
    if(y<=n/2 and f==false)
    {


        int x1=n-y+1;

        if(x>=y and x<=x1)
        {

            ans=y;
            f=true;
        }
    }
    if(y>=n/2 and f==false)
    {



        int dif=n-y+1;


        if(x>=dif and x<=y)
        {

            ans=dif;
            f=true;
        }
    }

    if(x>=n/2 and f==false)
    {


        int dif=n-x+1;

        if(y>=dif and y<=x)
        {

            ans=dif;
            f=true;
        }
    }

    return ans;

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

        int n,x1,y1,x2,y2;

        cin>>n>>x1>>y1>>x2>>y2;



        int f=solve(n,x1,y1);
        int l=solve(n,x2,y2);



        cout<<abs(f-l)<<endl;
    }

    return 0;
}

