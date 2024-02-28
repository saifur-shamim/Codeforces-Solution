///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=9000000000000000000;

int main()
{
    faster;
    int n,m;
    cin>>n;

    ll i,j,sum=0;
    vl v;

    for(i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        sum+=a;
        v.PB(a);
    }

    sort(all(v));

    cin>>m;

    for(i=0; i<m; i++)
    {
        ll x,y;
        cin>>x>>y;

        int lindx=lower_bound(v.begin(),v.end(),x)-v.begin();
        int uindx=upper_bound(v.begin(),v.end(),x)-v.begin();

        ll a=0,b=0,c=infll,a1=0,b1=0,c1=0;
        if(lindx==n)
        {
            lindx=n-1;
            a=x-v[lindx];
        }
        if(uindx==n)
        {
            uindx=n-1;
            if(v[uindx]<x)
            {
                b=x-v[uindx];
            }
        }

        //pf("lindx = %d\nuindx = %d\n",lindx,uindx);
        //pf("v[%d] = %lld  v[%d] = %lld\n",lindx,v[lindx],uindx,v[uindx]);
        if(y>(sum-v[lindx]))
            a+=y-(sum-v[lindx]);
        if(y>(sum-v[uindx]))
            b+=y-(sum-v[uindx]);

        //pf("a = %lld\nb = %lld\n",a,b);

        if((lindx-1)>=0)
        {
            lindx--;
            c=(x-v[lindx]);
            if(y>(sum-v[lindx]))
                c+=y-(sum-v[lindx]);
        }

        a=max(a,a1),b=max(b,b1),c=max(c,c1);
        //pf("c = %lld\n",c);
        cout<<min({a,b,c})<<endl;
    }
}
