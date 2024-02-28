#include<bits/stdc++.h>

using namespace std;

#define     endl      '\n'
int in[101],low[101],vis[101];
vector<int>v[101];
int timer;
void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    for(int child: v[node])
    {
        if(child==par)continue;
        if(vis[child]==1)
        {
            low[node]=min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);
            if(low[child]>in[node])
            {
                cout<<node<<" -> "<<child<<"  is a bridge"<<endl;
            }
            low[node]=min(low[node],low[child]);
        }
    }
}

int main()
{

    int n,m,x,y,i;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,-1);


    return 0;
}
