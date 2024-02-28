///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

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

        ll n,m;
        cin>>n>>m;

        ll n1=n;

        ll cnt2=0,cnt5=0;

        while(n1%2==0)
        {
            cnt2++;
            n1/=2;
        }

        while(n1%5==0)
        {
            cnt5++;
            n1/=5;
        }

        ll val=1;

        if(cnt5>cnt2)
        {
            ll dif=cnt5-cnt2;

            while(dif--)
            {
                if(val*2LL<=m)
                {
                    val*=2LL;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            ll dif=cnt2-cnt5;

            while(dif--)
            {
                if(val*5LL<=m)
                {
                    val*=5LL;
                }
                else
                {
                    break;
                }
            }
        }

        while(val*10LL<=m)
        {
            val*=10LL;
        }

        val=(m/val)*val;

        cout<<n*val<<endl;
    }
    return 0;
}
