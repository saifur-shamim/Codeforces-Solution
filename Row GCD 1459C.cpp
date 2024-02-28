///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define mod 100000007
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll n,m;
    cin>>n>>m;

    ll ar[n+1],br[m+1],i;

    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
    }

    for(i=1; i<=m; i++)
    {
        cin>>br[i];
    }

    ll ans=0;

    for(i=2; i<=n; i++)
    {
        ans=__gcd(ans,abs(ar[1]-ar[i]));
    }

    for(i=1; i<=m; i++)
    {
        ll ans1=__gcd(ar[1]+br[i],ans);

        cout<<ans1<<" ";
    }

    return 0;
}
