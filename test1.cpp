#include<bits/stdc++.h>
using namespace std;
vector <int> v[100];
int vis [100];

void dfs(int node)
{
    vis [node]=1;


    for (int i =0; i<v[node].size(); i++)
    {
        int child = v[node][i];
        if (vis[child]==0)
        {
            dfs (child);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;

    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);

    }

    int s,d;
    cin>>s>>d;

    dfs(s);

    if(vis[d]==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
