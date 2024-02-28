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

void bfs(int node)
{
    int  b=0,w=0;
    queue <int> pq;
    pq.push(node);

    while(!pq.empty())
    {
        int a;
        a=pq.front();
        pq.pop();

        cout<<"Node " <<a<<endl;
        for(auto child:adj[a])
        {
            if(vis[child]==false)
            {

                vis[child]=true;
                pq.push(child);
            }
        }

    }


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

        for(i=2; i<=n; i++)
        {
            cin>>ar[i];
            adj[i].PB(ar[i]);
            adj[ar[i]].PB(i);

        }



        vis[1]=true;
        bfs(1);



    }
    return 0;
}
