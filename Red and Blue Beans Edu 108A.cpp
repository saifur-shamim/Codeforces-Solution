///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int r,b,d,div;

        cin>>r>>b>>d;

        if(r>b) swap(r,b);

        div=(b+r-1)/r;

        if(div-1>d) cout<<"NO\n";
        else cout<<"YES\n";



    }

    return 0;
}
