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
       ll x,y,n,i;
        cin>>n>>x>>y;

        string s1,s2;

        cin>>s1>>s2;

        vl v;

        for(i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                v.PB(i);
            }
        }

        if(sz(v)%2!=0)
        {
            cout<<"-1\n";
        }
        else if(sz(v)==0)
        {
            cout<<"0\n";
        }
        else
        {
            if(sz(v)>2)
            {
                cout<<(sz(v)/2 * y)<<endl;
            }
            else
            {
                if((v[1]-v[0])==1)
                {
                    cout<<min(x,2*y)<<endl;
                }
                else
                {
                    cout<<y<<endl;
                }
            }
        }
    }
    return 0;
}
