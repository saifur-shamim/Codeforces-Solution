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
        ll n,x,i;
        cin>>n>>x;

        ll ar[n+2];

        for(i=0;i<n;i++) cin>>ar[i];

        ll sum=0;

        vl v;
        for(i=0;i<n;i++)
        {
            sum+=ar[i];

            ll sum1=sum;
            ll mx=sum;
            ll k=0;
            for(ll j=i+1;j<n;j++)
            {
               sum1+=ar[j];
               sum1-=ar[k];
               k++;
               mx=max(mx,sum1);
            }

            v.PB(mx);
        }


        for(i=0;i<=n;i++)
        {
            ll mx=0;

            for(ll j=0;j<sz(v);j++)
            {
                ll sum;
                if(i>j+1)
                {
                   sum=v[j]+x*(j+1);
                }
                else
                {
                    sum=v[j]+x*i;
                }

                mx=max(mx,sum);
            }

            cout<<mx<<" ";
        }
        cout<<endl;

    }
    return 0;
}
