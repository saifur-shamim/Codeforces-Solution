///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster;
    ll n;
    cin>>n;

    if(n<=2)
    {
        cout<<n<<nl;
    }
    else if(n<4)
    {
        cout<<n*(n-1)*(n-2)<<nl;
    }
    else
    {
       if(n%2!=0)
       {
           cout<<1LL*(n)*(n-1)*(n-2)<<nl;
       }
       else
       {
           ll a=n;
           ll b=n-1;
           ll c1=n-2;
           ll c2=n-3;

           ll g1=__gcd(a,c1);
           ll g2=__gcd(a,c2);


           ll ans1= 1LL*b*(a/g1)*(c1/g1)*g1;


           ll ans2=1LL*b*(a/g2)*(c2/g2)*g2;

           ll ans3=(n-1)*(n-2)*(n-3);

           cout<<max(ans1,max(ans2,ans3))<<nl;

       }
    }
}
