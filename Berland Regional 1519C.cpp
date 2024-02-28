///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i,j;
        cin>>n;

        ll a[n+2],b[n+2];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        vector<ll>v[n+2],pre[n+2];

        for(i=0; i<n; ++i)
        {
            v[a[i]].pb(b[i]);
        }

        for(i=1; i<=n; i++)
        {
            if(v[i].size()==0) continue;

            sort(v[i].begin(),v[i].end());

            pre[i].pb(v[i][0]);

            for(j=1; j<=v[i].size(); j++)
            {
                pre[i].pb(pre[i][j-1]+v[i][j]);
            }
        }

        ll ans[n+2];
        memset(ans,0,sizeof(ans));

        for(i=1; i<=n; i++)
        {
            if(v[i].size()==0)
            {
                continue;
            }
            else
            {
                ll x=1;
                while(x<=v[i].size())
                {
                    if(v[i].size()%x==0)
                    {
                        ans[x]+=pre[i][v[i].size()-1];
                    }
                    else
                    {
                        ll m=v[i].size()%x;
                        m--;
                        ans[x]+=pre[i][v[i].size()-1]-pre[i][m];
                    }
                    x++;
                }
            }

        }

        for(i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<nl;
    }

    return 0;
}
