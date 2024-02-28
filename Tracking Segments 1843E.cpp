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

ll n,m;
vl b;
vl t;
vector<pair<pair<ll,ll>,ll> > a;

void update(ll id,ll b,ll e,ll r,ll val)
{

    if(b>r or e<r) return;

    if(b==e and b==r)
    {

        t[id]=val;
        return;
    }

    ll mid=(b+e)>>1;

    update(id*2,b,mid,r,val);
    update(id*2+1,mid+1,e,r,val);

    t[id]=t[id*2]+t[id*2+1];
}


ll query(ll id,ll b,ll e,ll i,ll j)
{
    if(e<i or b>j)
    {
        return 0;
    }
    if(b>=i and e<=j)
    {

        return t[id];
    }

    ll mid=(b+e)>>1;

    ll leftsum=query(id*2,b,mid,i,j);
    ll rightsum=query(id*2+1,mid+1,e,i,j);

    return leftsum+rightsum;
}

bool possible(ll k)
{

    t.assign(4*n,0);


    for(ll i=0; i<k; i++)
    {

        update(1,1,n,b[i],1);
    }

    for(ll i=0; i<m; i++)
    {
        ll res=query(1,1,n,a[i].F.F,a[i].F.S);

        if(res>=a[i].S) return true;
    }

    return false;
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

        t.clear();
        b.clear();
        a.clear();
        ll i;
        cin>>n>>m;

        ll l,r;


        for(i=0; i<m; i++)
        {
            cin>>l>>r;

            int tmp=r-l;
            tmp++;
            tmp/=2;
            tmp++;



            a.PB({{l,r},tmp});

        }

        ll q;
        cin>>q;

        ll ans=-1;


        for(i=0;i<q;i++)
        {
            int x;
            cin>>x;

            b.PB(x);

        }

        ll low=1,high=q;

        while(low<=high)
        {
            ll mid=low+(high-low)/2;


            if(possible(mid))
            {

                ans=mid;
                high=mid-1;

            }
            else
            {

                low=mid+1;
            }


        }

        cout<<ans<<endl;
    }

    return 0;
}

