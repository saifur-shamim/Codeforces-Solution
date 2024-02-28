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
        ll n,c2,c1,xc1,xc2;
        cin>>n;

        c2=n/3;
        c1=n-(c2*2);

        xc1=n/3;
        if((n-xc1)%2==0)
        {
            xc2=(n-xc1)/2;
        }
        else
        {
             xc2=(n-xc1)/2;
             xc1++;
        }

        if((abs(c1-c2))<=(abs(xc1-xc2)))
        {
            cout<<c1<<" "<<c2<<nl;
        }
        else
        {
            cout<<xc1<<" "<<xc2<<nl;
        }
    }

    return 0;
}
