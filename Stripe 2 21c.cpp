///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<pi> vpi;
typedef vector<pl>vpl;

#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define endl '\n'
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

const int inf=2e9;
const ll infll=9000000000000000000;
const dl PI=acos(-1);

int main()
{
    int n,i;
    cin>>n;

    vl v(n);
    ll s=0;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
        v[i]+=s;
        s=v[i];
    }

    ll ans=0,cnt=0;

    for(i=0; i<n-1; i++)
    {
        if(v[i]==(2*(v[n-1]/3))) ans+=cnt;
        if(v[i]==(v[n-1]/3)) cnt++;
    }

    if(v[n-1]%3) cout<<"0\n";
    else cout<<ans<<endl;
}
