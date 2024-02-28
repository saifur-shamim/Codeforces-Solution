///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll i,root=sqrt(n)+1;



        if(n%2)
        {
            cout<<"YES\n";
        }

        else
        {
            ll pos=0;

            while(n>1)
            {
                if(n%2)
                {
                    pos=1;
                    break;
                }
                n/=2;
            }

            if(pos==0)
            {
                cout<<"NO\n";
            }

            else
            {
                cout<<"YES\n";
            }
        }
    }

    return 0;
}
