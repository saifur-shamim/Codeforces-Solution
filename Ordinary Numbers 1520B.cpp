///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long int

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n;
        cin>>n;

        ll ans=0,i,k;

        for(i=1;i<=9;i++)
        {
            k=i;

            while(k<=n)
            {
                ans++;
                k=k*10+i;
            }
        }

        cout<<ans<<nl;
    }
}
