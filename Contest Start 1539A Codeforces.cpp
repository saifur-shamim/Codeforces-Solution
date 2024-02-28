///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,x,t,ans=0;
        cin>>n>>x>>t;

        if(x>t)
        {
            cout<<ans<<endl;
        }
        else if(x==t)
        {
            cout<<n-1<<endl;
        }
        else
        {
            ll a=t/x;

            if(a>=n)
            {
                ans=(n*(n-1))/2;
            }
            else
            {
                ll z=n-a;

                ans=z*a;
                ans+=(a*(a-1))/2;
            }

            cout<<ans<<endl;
        }
    }

    return 0;
}
