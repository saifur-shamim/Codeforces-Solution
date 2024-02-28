///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k1,k2,w,b,twc,tbc;

        cin>>n>>k1>>k2;
        cin>>w>>b;

        twc=k1+k2;
        tbc=(2*n)-twc;

        if((twc/2)>=w && (tbc/2)>=b)
        {
            cout<<"YES\n";
        }

        else
        {
            cout<<"NO\n";
        }

    }

    return 0;
}
