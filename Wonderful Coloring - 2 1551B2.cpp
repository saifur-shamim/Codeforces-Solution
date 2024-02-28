///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,k,i;
        cin>>n>>k;

        int x;

        map<int,int> mp;
        vector <int> v[n+2];

        for(i=0; i<n; i++)
        {
            cin>>x;

            mp[x]++;
            v[x].pb(i);
        }

        int ans[n+2]={0},clr;
        vector<int> v1;

        for(auto it:mp)
        {
            int a=it.first;
            int b=it.second;

            clr=1;

            if(b>=k)
            {
                for(i=0; i<k; i++)
                {
                    int ind=v[a][i];
                    ans[ind]=clr;
                    clr++;
                }
            }
            else
            {
                for(i=0; i<v[a].size(); i++)
                {
                    v1.pb(v[a][i]);
                }
            }
        }

        int mod=v1.size()%k;
        clr=1;
        for(i=0; i<v1.size()-mod; i++)
        {
            ans[v1[i]]=clr;
            clr++;
            if(clr>k) clr=1;
        }

        for(i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<nl;
    }
}
