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
        int n,i,j=1;
        cin>>n;

        int a;
        pii p[n+1];
        vi v;

        for(i=1;i<=n;i++)
        {
            cin>>a;

            if(i>a)
            {
                p[j].F=a;
                p[j].S=i;
                v.PB(a);
                j++;

            }
        }

        sort(all(v));
        sort(p+1,p+j);

        ll sum=0;

        for(i=1;i<j;i++)
        {
            int val=p[i].S;
            auto it=upper_bound(v.begin(),v.end(),val)-v.begin();
            sum+=sz(v)-it;
        }

        cout<<sum<<endl;
    }
    return 0;
}
