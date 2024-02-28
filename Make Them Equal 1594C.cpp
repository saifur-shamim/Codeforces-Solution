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
const ll infll=900000000000000000;

int main()
{
    faster;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        string str;
        char ch;
        cin>>n>>ch>>str;
        ll cnt = 0;
        for(int i=0; i<str.size(); i++)
            if(str[i] == ch) cnt++;
        if(cnt==n) cout<<0<<endl;
        else
        {
            ll res = 0;
            for(int i=n; i>=1 && !res; i--)
            {
                if(str[i-1]==ch && i+i>n) res=i;
            }
            if(res != 0)
            {
                cout<<1<<endl;
                cout<<res<<endl;
            }
            else
            {
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }

    return 0;
}
