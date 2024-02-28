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
    int i,x;
    vi v(32770);
    v[0]=0;
    for(i=1;i<32768;i++)
    {
        int n=i;
        int ans=32768-n;
        int cnt=0;
        while(n!=0)
        {
            cnt++;
            n=(n*2)%32768;
        }

        v[i]=min(cnt,ans);

        for(int j=max(0,i-16);j<=i-1;j++)
        {
            v[j]=min(v[j],v[i]+(i-j));
        }
    }
    cin>>x;

    for(i=1;i<=x;i++)
    {
        int a;
        cin>>a;

        cout<<v[a]<<" ";
    }
    return 0;
}
