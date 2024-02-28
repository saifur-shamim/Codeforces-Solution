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
        ll n,l,r,i;
        cin>>n>>l>>r;


        bool f=true;
        vl v;
        for(i=1; i<=n; i++)
        {
            ll div=l/i;
            div*=i;
            if(div<l)
            {
                while(div<l)
                {
                    div+=i;
                }

                if(div<=r)
                    v.PB(div);
                else
                {
                    f=false;
                    break;
                }

            }
            else if(div>r)
            {
                f=false;
                break;
            }
            else
            {
                v.PB(div);
            }
        }

        if(f)
        {
            YES;
            for(auto it:v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else
        {
            NO;
        }


    }
    return 0;
}
