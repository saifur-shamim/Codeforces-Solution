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
const int lm =4e4+2;

vi adj[lm],ans[lm],child[lm];
bool vis[lm];
string s;

void dfs(int node)
{
   int  b=0,w=0;
    vis[node]=true;

    for(auto child:adj[node])
    {
       if(vis[child]==false)
       {
           dfs(child);
       }
    }

    for(auto it:child[node])
    {
        b+=ans[it][0];
        w+=ans[it][1];
    }
    if(s[node-1]=='B') b++;
    else w++;
    cout<<"Node = "<<node<<endl;
    ans[node].PB(b);
    ans[node].PB(w);

    //cout<<"black = "<<ans[node][0]<<" white = "<<ans[node][1]<<endl;
}


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

        int ar[n+1];

        for(i=2;i<=n;i++)
        {
            cin>>ar[i];
            adj[i].PB(ar[i]);
            adj[ar[i]].PB(i);
            child[ar[i]].PB(i);
        }

        cin>>s;

        dfs(1);

        int cnt=0;
        for(i=1;i<=n;i++)
        {
            if(ans[i][0]==ans[i][1])
            {
                cnt++;
            }

            vis[i]=false;
            adj[i].clear();
            ans[i].clear();
            child[i].clear();
        }

        cout<<cnt<<endl;
        s.clear();

    }
    return 0;
}
