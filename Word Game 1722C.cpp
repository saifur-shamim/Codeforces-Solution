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
        int n,i;
        cin>>n;

        int n1=n;
        n=3*n;

        string s[n];

        map<string ,set<int>>mp;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            int a=0;
            if(i<n1) a=0;
            if(i>=n1 and i<2*n1) a=1;
            else if(i>=2*n1) a=2;

            mp[s[i]].insert(a);
        }
        int o=0,tw=0,th=0;
        for(i=0;i<n;i++)
        {
            int a=0;

            if(sz(mp[s[i]])==1) a=3;
            else if(sz(mp[s[i]])==2) a=1;

            if(i<n1) o+=a;
            else if(i<2*n1) tw+=a;
            else th+=a;

        }

        cout<<o<<" "<<tw<<" "<<th<<endl;
    }
    return 0;
}
