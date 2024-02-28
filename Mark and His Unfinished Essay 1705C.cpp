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
        ll n,c,q,i;
        cin>>n>>c>>q;

        string s; cin>>s;

        vpl op(c),seg(c);
        ll len=n;
        for(i=0;i<c;i++)
        {
            ll l,r;
            cin>>l>>r;

            op[i]={l,r};

            seg[i]={len+1,len+(r-l+1)};
            len=seg[i].S;
        }

        while(q--)
        {
            ll ind;
            cin>>ind;

            if(ind<=n)
            {
                cout<<s[ind-1]<<endl;
                continue;
            }

            for(i=c-1;i>=0;i--)
            {
                if(ind>=seg[i].F and ind<=seg[i].S)
                {
                    ind=op[i].F+(ind-seg[i].F);
                }
            }

            cout<<s[ind-1]<<endl;
        }
    }
    return 0;
}
