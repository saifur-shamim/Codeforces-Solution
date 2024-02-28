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

        if(n%2020==0 || n%2021==0)
        {
            cout<<"YES\n";
        }
        else
        {
            ll div=n/2020;
            ll t_20=div-1,t_21=1,pos=0;

            while(t_20>0 && t_21<div)
            {
                if((t_20*2020)+(t_21*2021)==n)
                {
                    pos=1;
                    break;
                }

                t_20--;
                t_21++;
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
