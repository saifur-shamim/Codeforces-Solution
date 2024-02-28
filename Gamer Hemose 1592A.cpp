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
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,H,i;
        cin>>n>>H;
        ll ar[n+1];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        sort(ar,ar+n);
        reverse(ar,ar+n);

        ll sum=ar[0]+ar[1];
        ll mx=max(ar[0],ar[1]);

        ll cnt=0;

        if(H%sum==0) cnt=(H/sum) *2;
        else
        {
            if(H%sum>mx)
            {
                cnt=H/sum;
                cnt++;
                cnt=cnt*2;
            }
            else
            {
                cnt=(H/sum) *2;
                cnt++;
            }
        }


        cout<<cnt<<endl;
    }
}
