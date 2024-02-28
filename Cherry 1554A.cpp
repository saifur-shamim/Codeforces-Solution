///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;

        ll ar[n+2],ans=0;

        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        for(i=0;i<n-1;i++)
        {
            ans=max(ans,ar[i]*ar[i+1]);
        }

        cout<<ans<<nl;
    }
}
