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
        ll n;
        cin>>n;

        if(n<=10)
        {
            if(n<=6)
            {
                cout<<"15"<<nl;
            }
            else if(n<=8)
            {
                cout<<"20"<<nl;
            }
            else
            {
                cout<<"25"<<nl;
            }
        }
        else
        {
            ll ans=(n/10)*25;
            ll rem=n%10;

            if(rem!=0)
            {
                if(rem<=2)
                {
                    ans+=5;
                }
                else if(rem<5)
                {
                    ans+=10;
                }
                else if(rem<=6)
                {
                    ans+=15;
                }
                else if(rem<=8)
                {
                    ans+=20;
                }
                else
                {
                    ans+=25;
                }
            }
            cout<<ans<<nl;
        }
    }
}
