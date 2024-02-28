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

        vi v(n);

        for(i=0; i<n; i++) cin>>v[i];


        if(is_sorted(all(v)))
        {
            cout<<"0\n";
            continue;
        }

        vpi ans;
        if(v[0]%2)
        {
            int last;

            for(i=n-1; i>=0; i--)
            {
                if(v[i]%2)
                {
                    last=i;
                    break;
                }
            }

            if(v[0]!=v[last])
            {
                v[0]=v[last];
                ans.PB({1,last+1});
            }

            for(i=1; i<n; i++)
            {
                if(v[i]%2==0)
                {
                    v[i]=v[0];
                    ans.PB({1,i+1});
                }
            }

            for(i=1; i<n; i++)
            {
                if(v[i]!=v[0])
                {
                    ans.PB({i+1,n});
                }
            }
        }
        else
        {
            int last;

            for(i=n-1; i>=0; i--)
            {
                if(v[i]%2==0)
                {
                    last=i;
                    break;
                }
            }

            if(v[0]!=v[last])
            {
                v[0]=v[last];
                ans.PB({1,last+1});
            }

            for(i=1; i<n; i++)
            {
                if(v[i]%2)
                {
                    v[i]=v[0];
                    ans.PB({1,i+1});
                }
            }

            for(i=1; i<n; i++)
            {
                if(v[i]!=v[0])
                {
                    ans.PB({i+1,n});
                }
            }
        }
        cout<<sz(ans)<<endl;
        for(auto it:ans)
        {
            cout<<it.F<<" "<<it.S<<endl;
        }
    }
    return 0;
}
