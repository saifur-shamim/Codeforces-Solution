///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
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
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll c=(*max_element(a.begin(),a.end()))-(*min_element(a.begin(),a.end()));

        ll sum=accumulate(a.begin(),a.end(),0LL);
        if(n==1*1LL)
        {
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
        vector<ll> negs,poss;
        for(int i=0; i<n; i++)
        {
            if(a[i]<0)negs.push_back(a[i]);
            else poss.push_back(a[i]);
        }
        sort(negs.begin(),negs.end(),greater<ll>());
        sort(poss.begin(),poss.end(),greater<ll>());
        vector<ll> ans;
        sum=0;

        for(int i=0; i<poss.size(); i++)
        {
            if(sum+poss[i]>=c)
            {
                while(sum+poss[i]>=c)
                {
                    sum+=negs.back();
                    ans.push_back(negs.back());
                    negs.pop_back();
                }
            }
            sum+=poss[i];
            ans.push_back(poss[i]);
        }
        while(!negs.empty())
        {
            ans.push_back(negs.back());
            negs.pop_back();
        }
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

