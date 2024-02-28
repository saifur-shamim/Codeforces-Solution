///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i;
        cin>>n;

        ll ar[n+2];

        for(i=1; i<=n; i++)
        {
          cin>>ar[i];
        }

        map<ll, ll> mp;
        ll ans=0;
        for(i=1; i<=n; i++)
        {
            ans+=mp[ar[i]]*(n-i+1);
            mp[ar[i]]+=i;

        }

        cout<<ans<<nl;
    }

}
