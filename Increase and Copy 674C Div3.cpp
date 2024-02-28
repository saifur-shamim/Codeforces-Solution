///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;

        cin>>n;

        ll sq=sqrt(n);

        if(n%sq==0) cout<<sq+((n/sq)-2)<<endl;
        else cout<<sq+((n/(sq)-1))<<endl;
    }

    return 0;
}
