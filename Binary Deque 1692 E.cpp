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
/*
8 1
0 1 0 1 0 1 1 0
*/
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
        ll n,s,i,sum=0;
        cin>>n>>s;

        ll ar[n+1];

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];


        }

        if(sum<s) cout<<"-1\n";
        else if(sum==s) cout<<"0\n";
        else
        {
            ll l=1,r=1,mx=0,cur=0;

            while(r<=n)
            {
                cur+=ar[r];

                while(cur>s)
                {
                    cur-=ar[l];
                    l++;
                }

                mx=max(mx,(r-l)+1);
                r++;
            }

            cout<<n-mx<<endl;
        }
    }
    return 0;
}
