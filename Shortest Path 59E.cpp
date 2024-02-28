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


const int maxn=3005;
const int inf=1e9;
int n,m,k;
vector<int> g[maxn];
vector<int> st[3005][3005];
int d[3005][3005];
int pre[3005][3005];

struct qnode
{
    int u,v;
};

void dfs (int u)
{
    vector<int> path;
    printf("%d\n",d[u][n]);
    printf("1 ");
    int t1=n,t2;
    while (t1!=1)
    {
        path.push_back(t1);
        t2=u;
        u=pre[u][t1];
        t1=t2;
    }
    reverse(path.begin(),path.end());
    for (int v:path) printf("%d ",v);
}

int judge (int a,int b,int c)
{
    for (int v:st[a][b]) if (v==c) return 0;
    return 1;
}

void bfs (int s)
{
    queue<qnode> q;
    q.push({0,s});
    while (!q.empty())
    {
        qnode tt=q.front();
        q.pop();
        int u=tt.v;
        if (u==n)
        {
            dfs(tt.u);
            exit(0);
        }
        for (int v:g[u])
        {
            if (d[u][v]==0&&judge(tt.u,u,v))
            {
                d[u][v]=d[tt.u][u]+1;
                pre[u][v]=tt.u;
                q.push({u,v});
            }
        }
    }
}

int main ()
{
    scanf("%d%d%d",&n,&m,&k);
    for (int i=1; i<=m; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i=1; i<=k; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        st[a][b].push_back(c);
    }
    bfs(1);
    printf("-1\n");

}

