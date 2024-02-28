///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'

int main()
{
    faster;
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,m,i,j;
        cin>>n>>m;

        n=2*n-1;

        string s[n+1];

        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }

        string ans="";



        for(i=0;i<m;i++)
        {
            map<char,int>mp;

            for(j=0;j<n;j++)
            {
                if(mp[s[j][i]]==0) mp[s[j][i]]=1;
                else mp[s[j][i]]=0;
            }

            for(auto it:mp)
            {
                if(it.second!=0)
                {
                    ans+=it.first;
                    break;
                }
            }
        }

        cout<<ans<<nl;
    }
}
