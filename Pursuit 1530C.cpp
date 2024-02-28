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

const int N=1e5+6;

int a[N],b[N];

int main()
{
    faster;
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,i;
        cin>>n;

        for(i=1;i<=n;i++) cin>>a[i];

        sort(a+1,a+n+1);
        reverse(a+1,a+n+1);
        for(i=1;i<=n;i++) a[i]+=a[i-1];

        for(i=1;i<=n;i++) cin>>b[i];

        sort(b+1,b+n+1);
        reverse(b+1,b+n+1);

        for(i=1;i<=n;i++) b[i]+=b[i-1];

        for(int add=0;;add++)
        {
            int nn=n+add;
            int p=nn-nn/4;
            int h=min(add,p);
            int ex=p-h;

            ll s1=h*100+a[ex];
            ll s2=b[min(n,p)];

            if(s1>=s2)
            {
                cout<<add<<endl;
                break;
            }
        }
    }

    return 0;
}
