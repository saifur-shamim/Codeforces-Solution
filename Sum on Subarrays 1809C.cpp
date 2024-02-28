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

vl st;

void solve()
{
    ll i=1;

    ll sum=0;


    while(i<=30)
    {
        sum+=i;
        st.PB(sum);

        i++;
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

    solve();
    /*
        for(auto it:st)
        {
            cout<<it<<" ";
        }

        cout<<endl;
        ll ind=lower_bound(st.begin(),st.end(),7)-st.begin();

        cout<<ind<<endl;
        */
    int tc;
    cin>>tc;

    while(tc--)
    {
        ll n,k;
        cin>>n>>k;

        vl v;

        v.assign(n,-1000);


        ll ind=lower_bound(st.begin(),st.end(),k)-st.begin();

        ll tot=0;


        //dbg(ind);
        if(st[ind]==k)
        {
            ind=ind;
        }
        else
        {
            ind=ind-1;
        }

        //dbg("after ",ind,tot);
        ll i=0;
        for(;i<=ind;i++)
        {
            v[i]=2;
        }


        tot=ind+1;
        ll lagse=tot;
        tot=(tot+1)*(tot);
        tot/=2;

       // dbg(tot);
        ll extra=k-tot;

        if(extra>0)
        {
            v[i]=-(((lagse-extra+1)*2)-1);
        }

        for(auto it:v)
        {
            cout<<it<<" ";
        }

        cout<<endl;
    }



    return 0;
}

