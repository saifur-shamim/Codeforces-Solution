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

        int cnt[n]={0},ar[n];

        for(i=0;i<=n;i++) ar[i]=i;

        for(i=n-1;i>=0;)
        {
           ll rt=sqrt(ar[i]);

           if(rt*rt!=ar[i]) rt++;
           rt*=rt;

           ll k=rt-ar[i];
           ll j=i;

           i=k-1;

           for(;k<=j;k++,j--)
           {
               swap(ar[k],ar[j]);
           }
        }

        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
