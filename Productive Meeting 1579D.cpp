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
    int tc;

    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;

        priority_queue<pair<ll,ll>> pq;

        for(i=1;i<=n;i++)
        {
            ll x;
            cin>>x;

            if(x!=0)
            {
                pq.push({x,i});
            }
        }

        vpl ans;

        while(sz(pq)>1)
        {
            auto a=pq.top();
            pq.pop();

            auto b=pq.top();
            pq.pop();

            ans.PB({a.S,b.S});

            if(a.F>1) pq.push({a.F-1,a.S});
            if(b.F>1) pq.push({b.F-1,b.S});
        }

        cout<<sz(ans)<<endl;

        for(auto it:ans)
        {
            cout<<it.F<<" "<<it.S<<endl;
        }
    }
}
