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
        ll n,i;
        cin>>n;

        ll ar[n+1];

        map<ll,ll>mp;

        vl v;
        ll sum=0;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
            v.PB(ar[i]);
            sum+=ar[i];
        }

        vl v1;
        priority_queue<ll> p;

        p.push(sum);

        for(i=1; i<n; i++)
        {
            while(!p.empty() and mp[p.top()])
            {
                v1.PB(p.top());
                mp[p.top()]--;
                p.pop();
            }

            if(!p.empty())
            {
                ll a,b;

                ll tp=p.top();
                p.pop();
                if(tp%2)
                {
                    a=tp/2;
                    b=a+1;
                }
                else
                {
                    a=tp/2;
                    b=a;
                }

                p.push(a);
                p.push(b);
            }
        }

        while(!p.empty() and mp[p.top()])
        {
            v1.PB(p.top());
            mp[p.top()]--;
            p.pop();
        }

        sort(all(v));
        sort(all(v1));

        if(v==v1) YES;
        else NO;

    }

    return 0;
}
