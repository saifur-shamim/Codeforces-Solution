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
        ll n,i,k,s=0;

        cin>>n>>k;

        ll ar[n+2];

        for(i=0;i<n;i++)
        {
            ll x;
            cin>>x;

           ar[i]=1;

            for(ll j=1;j<=x;j++)
            {
                ar[i]*=10;
            }
        }
        k++;

        ll k1=k;
        for(i=0;i<n-1 and k1>0;i++)
        {
            //cout<<" i = "<<ar[i]<<endl;
            ll dif=ar[i+1]-ar[i];


            ll mx=min(dif/ar[i],k1);

           // cout<<" dif = "<<dif<<" mx = "<<mx<<endl;
            s+=mx*ar[i];

            k1-=mx;
           // cout<<" k1 = "<<k1<<endl;
        }

        if(k1>0)
        {
            s+=ar[n-1]*k1;
        }

        cout<<s<<endl;
    }
    return 0;
}
