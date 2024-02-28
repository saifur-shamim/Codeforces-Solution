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
    int n,m,i;
    cin>>n>>m;

    vpi v;

    map<int,int>mp1,mp2;

    for(i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        mp1[a]=b;
        mp2[b]=a;
    }

    bool f=false;
    for(i=1;i<=n and f==false;i++)
    {
        if(mp1[i]==0 and mp2[i]==0)
        {

            for(int j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    v.PB({i,j});
                }
            }

            f=true;
        }
    }



    cout<<sz(v)<<endl;

    for(auto it:v)
    {
        cout<<it.F<<" "<<it.S<<endl;
    }

    return 0;
}
