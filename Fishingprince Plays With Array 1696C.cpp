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
        ll n,i,k,m;
        cin>>n>>m;

        ll ar[n+1];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        cin>>k;

        ll br[k+1];
        vpl v1,v2;
        for(i=0; i<k; i++)
        {
            cin>>br[i];
        }

        for(i=0; i<n; i++)
        {
            ll cnt=0;
            ll x=ar[i];

            while(x%m==0)
            {
                cnt++;
                x/=m;
            }

            ll p=pow(m,cnt);

            if(sz(v1)==0)
            {
                v1.PB({x,p});
            }
            else
            {
                ll last=sz(v1)-1;
                if(v1[last].F==x) v1[last].S+=p;
                else v1.PB({x,p});
            }
        }

        for(i=0; i<k; i++)
        {
            ll cnt=0;
            ll x=br[i];

            while(x%m==0)
            {
                cnt++;
                x/=m;
            }

            ll p=pow(m,cnt);

            if(sz(v2)==0)
            {
                v2.PB({x,p});
            }
            else
            {
                ll last=sz(v2)-1;
                if(v2[last].F==x) v2[last].S+=p;
                else v2.PB({x,p});
            }
        }

        if(sz(v1)!=sz(v2)) cout<<"NO\n";
        else{
            bool ans=true;

            for(i=0;i<sz(v1);i++)
            {
                if(v1[i].F!=v2[i].F or v1[i].S!=v2[i].S)
                {
                    ans=false;
                    break;
                }
            }

            if(ans) YES;
            else NO;
        }
    }
    return 0;
}
