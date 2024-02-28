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

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

bool f(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b)
{
    if(a.first.F == b.first.F) return a.F.second > b.F.second;
    else return a.first.F > b.first.F;
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



    int n,m,i;
    cin>>n;

    map<int,int> mp;

    for(i=1; i<=n; i++)
    {
        int a;
        cin>>a;

        mp[a]++;
    }

    cin>>m;

    int ar[m+2],br[m+2];

    for(i=0; i<m; i++)
    {
        cin>>ar[i];
    }

    vector<pair<pair<int,int> ,int>> v;
    for(i=0; i<m; i++)
    {
        cin>>br[i];

        v.PB({{mp[ar[i]],mp[br[i]]},i});
    }

    sort(all(v),f);

    cout<<v[0].S+1<<endl;


    return 0;
}

