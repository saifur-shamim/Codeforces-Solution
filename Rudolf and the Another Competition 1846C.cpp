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

bool f1(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
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

        ll n,m,h,i,j;
        cin>>n>>m>>h;

        vl v[n+2];

        vpl pnt;

        map<ll,vector<ll> > mp;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                ll a;
                cin>>a;

                v[i].PB(a);
            }

            sort(all(v[i]));
            ll s=0;

            ll pun=0;
            for(j=0; j<m; j++)
            {
                if(s+v[i][j]>h) break;


                s+=v[i][j];
                pun+=s;

            }

            //dbg(i,j,pun);
            pnt.PB({j,pun});

            mp[i].PB(j);
            mp[i].PB(pun);

        }


        sort(all(pnt),f1);

        ll cnt=0;

        ll ans;
        ll r;

       // dbg("chk");
        //for(auto it: pnt)
       // {
            //cout<<it.F<<" "<<it.S<<endl;
        //}
        for(i=0; i<n; i++)
        {
            cnt++;

            if(pnt[i].F==mp[0][0] and pnt[i].S==mp[0][1])
            {
                ans=cnt;

                break;
            }
        }




        cout<<ans<<endl;

    }

    return 0;
}

/*

3 2 27
8 9
10 7
10 8

*/
