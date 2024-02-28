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

const int lm=104;
int ar[lm];
vi ans(lm);
bool vis[lm];
int n;

void ldfs(int l,int node,int lvl);
void rdfs(int r,int node,int lvl)
{
    int pos,mx=-1;

    while(r<n and vis[ar[r]]==false)
    {

        if(ar[r]>mx)
        {
            mx=ar[r];
            pos=r;
        }

        r++;
    }

    if(mx>0)
    {
        vis[mx]=true;
        ans[mx]=lvl+1;
       // pf("rdfs mx = %d ans[%d] = %d\n",mx,mx,ans[mx]);
        ldfs(pos-1,mx,lvl+1);
        rdfs(pos+1,mx,lvl+1);
    }
}

void ldfs(int l,int node,int lvl)
{
    int pos,mx=-1;

    while(l>=0 and vis[ar[l]]==false)
    {

        if(ar[l]>mx)
        {
            mx=ar[l];
            pos=l;
        }

        l--;
    }

    if(mx>0)
    {

        vis[mx]=true;
        ans[mx]=lvl+1;
       // pf("ldf mx = %d ans[%d] = %d\n",mx,mx,ans[mx]);
        ldfs(pos-1,mx,lvl+1);
        rdfs(pos+1,mx,lvl+1);
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
        int i;
        cin>>n;

        int pos=0;

        for(i=0; i<n; i++)
        {
            cin>>ar[i];

            if(ar[i]==n)
            {
                pos=i;
            }
        }

        vis[n]=true;
        ans[n]=0;
        ldfs(pos-1,n,0);
        rdfs(pos+1,n,0);

        for(i=0; i<n; i++)
        {
            cout<<ans[ar[i]]<<" ";
        }
        cout<<endl;

        for(i=0; i<=n; i++)

        {
            vis[i]=false;
            ans[i]=0;
            ar[i]=0;
        }
    }
    return 0;
}
