#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

vector<int>v[100001];
int vis[100001];

bool dfs(int node,int par)
{
    cout<<" node = "<<node<<" parent = "<<par<<endl;
    vis[node]=1;
    for(int child: v[node])
    {
        cout<<" child = "<<child<<endl;
        if(vis[child]==0)
        {
            if(dfs(child,node)==true)return true;
        }
        else
        {
            if(child!=par)return true;
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bool ans = dfs(1,-1);
    if(ans==true)cout<<"Cycle"<<endl;
    else cout<<"NOt cycle"<<endl;
}
