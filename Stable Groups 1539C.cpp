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
    ll n,k,x,i;
    cin>>n>>k>>x;

    ll ar[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n);

    vl v;

    for(i=0;i<n-1;i++)
    {
        if(ar[i+1]-ar[i]>x)
        {
            ll dif=ar[i+1]-ar[i];

            if(dif%x != 0)
            {
                v.PB(dif/x);
            }
            else{
                v.PB((dif/x)-1);
            }
        }
    }

    ll sum=0;

    sort(all(v));

    ll cnt=0;
    for(i=0;i<sz(v);i++)
    {
        sum+=v[i];

        if(sum>k)
        {
            break;
        }
        cnt++;
    }

    cout<<sz(v)+1-cnt<<endl;
}
