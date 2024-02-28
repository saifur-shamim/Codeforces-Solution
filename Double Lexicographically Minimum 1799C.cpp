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
string solve( string s, string t )
{
    int ret;
    ret = s.compare( t );
    if( ret == 0 )
    {
        return s;
    }
    else if( ret > 0 )
    {
        return s;
    }
    else
    {
        return t;
    }
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

        string s;
        cin>>s;



        sort(all(s));

        string ans;

        string s1,s2;
        s1=s;
        s2=s1;
        reverse(s2.begin(),s2.end());
        string res=solve(s1,s2);

        ans=res;

        while(next_permutation(s.begin(),s.end()))
        {


            s1,s2;
            s1=s;
            s2=s1;
            reverse(s2.begin(),s2.end());



            res=solve(s1,s2);

            //cout<<" res = "<<res<<endl;
            ans=min(ans,res);
        }

        //sort(all(v));


        // cout<<v[0]<<endl;

        cout<<ans<<endl;

    }

    return 0;
}

