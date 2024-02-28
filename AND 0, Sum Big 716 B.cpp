///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mod=1e9+7;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k,i,ans=1;

        cin>>n>>k;

        for(i=1; i<=k; i++)
        {
            ans*=n;
            ans%=mod;
        }

        cout<<ans<<endl;
    }

    return 0;
}
