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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans = 1;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]] = i;
        }
        int minidx = mp[0];
        int maxidx = mp[0];
        for (int i = 1; i < n; i++)
        {
            //cout<<" mp ["<<i<<"] = "<<mp[i]<<endl;
            if (mp[i] > maxidx)
            {
                maxidx = mp[i];
            }
            else if (mp[i] < minidx)
            {
                minidx = mp[i];
            }
            else
            {
                ans = ans * (maxidx - minidx + 1 - i);
                ans%=mod;
            }

            //cout<<"i = "<<i<<" ans = "<<ans<<endl;
        }
        cout << ans << endl;
    }
    return 0;
}
