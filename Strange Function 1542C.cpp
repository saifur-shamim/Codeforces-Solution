///Bismillahir Rahmanir Rahim

///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

ll lcm(ll a, ll b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n;
        cin>>n;

        ll prev=1,next=2,sum=0,rem=n;

        while(rem>0)
        {
            ll Lcm=lcm(prev,next);

            ll divisable=n/Lcm;

            ll sub_total=rem-divisable;

            sum=(sum%mod + (sub_total*next)%mod)%mod;

            next++;
            prev=Lcm;

            rem=divisable;
        }

        sum%mod;
        cout<<sum<<nl;

    }

    return 0;
}
