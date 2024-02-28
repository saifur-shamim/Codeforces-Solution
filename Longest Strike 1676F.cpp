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
        int n,i,k;
        cin>>n>>k;

        map<int,int>mp;

        for(i=0; i<n; i++)
        {
            int a;
            cin>>a;

            mp[a]++;
        }

        int l=0,r=0,last=0;
        int ans=0;

        int l1=-1,r1=-1;

        for(auto it:mp)
        {
            if(l==0 and it.S>=k)
            {
                l=it.F;
                r=it.F;

            }
            else if(it.F-last>1)
            {
                if(r-l>=ans and r!=0)
                {
                    ans=r-l;
                    l1=l;
                    r1=r;

                }
                l=r=0;
                if(it.S>=k)
                {
                    l=r=it.F;
                }
            }
            else if(it.S>=k)
            {
                r=it.F;
            }
            else
            {
                if(r-l>=ans and r!=0)
                {
                    ans=r-l;
                    l1=l;
                    r1=r;

                }
                l=r=0;
                if(it.S>=k)
                {
                    l=r=it.F;
                }
            }

            last=it.F;
        }

        if(r-l>=ans and r!=0)
        {
            l1=l;
            r1=r;
        }

        if(l1!=-1 and r!=-1)
        {
            cout<<l1<<" "<<r1<<endl;
        }
        else
        {
            cout<<"-1\n";
        }

    }
    return 0;
}
