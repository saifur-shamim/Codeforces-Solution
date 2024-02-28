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
        ll n,i;
        cin>>n;

        ll ar[n+2];

        vl od,ev;
        map<ll,ll>mp;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];

        }

        ll mx=0;
        for(i=n; i>=1; i--)
        {
            if(ar[i]%2 and mp[ar[i]]==0)
            {
                od.PB(i);
            }
            else if(ar[i]%2==0 and mp[ar[i]]==0)
            {
                ev.PB(i);
            }

            if(ar[i]==1)
            {
                mx=max(mx,i+i);
            }

            mp[ar[i]]++;
        }

        ll s1=sz(od);
        ll s2=sz(ev);
        for(i=s1-1; i>=0; i--)
        {

            for(ll j=i-1; j>=0; j--)
            {


                if(gcd(ar[od[i]],ar[od[j]])==1)
                {
                     mx=max(mx,od[i]+od[j]);
                }


            }

            for(ll j=s2-1; j>=0; j--)
            {

                if(gcd(ar[od[i]],ar[ev[j]])==1)
                {
                    mx=max(mx,od[i]+ev[j]);
                }

            }
        }

        if(mx==0)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<mx<<endl;
        }
    }
    return 0;
}
