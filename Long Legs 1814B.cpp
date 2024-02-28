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


bool prime(ll n)
{
    if(n<2) return false;
    else if(n<=3) return true;
    else if(n%2==0) return false;

    for(ll i=3; i*i; i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return  true;
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

        ll a,b;
        cin>>a>>b;

        ll ans=0;


        ll G=0;

        G=gcd(a,b);

        if(G==1 and a%2)
        {
            a--;
            ans++;
        }

        G=gcd(a,b);

        if(G==1 and b%2)
        {
            b--;
            ans++;
        }



        //dbg(ans);


        ll cur=1;


        G=gcd(a,b);

        ll last=1;
        dbg(G);
        if(G==0)
        {
            cout<<ans<<endl;
            continue;
        }
        // dbg(G);

        if(a!=0)
        {


            ll tmp=(G-cur)+a/G;

            last=G;

            // dbg(last);
            for(ll i=2; i*i<=a; i++)
            {
                ll t1=i-cur;

                if(a%i==0)
                {

                    t1+=(a/i);

                    if(t1<tmp)
                    {
                        last=i;
                        tmp=t1;
                    }
                }


                ans+=tmp;

            }

        }





        ll tmp=0;

        if(a==0)
        {
            tmp=G-cur;
            tmp+=b/G;
        }

        dbg(tmp);
        for(ll i=2; i*i<=b; i++)
        {
            ll t1=0;

            if(b%i==0)
            {

                if(i>cur)
                {
                    t1=i-cur;
                }
                t1+=(b/i);

                if(t1<tmp)
                {

                    tmp=t1;
                }
            }


            ans+=tmp;

        }


        cout<<ans<<endl;
    }

    return 0;
}

