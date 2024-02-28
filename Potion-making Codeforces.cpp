///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;

        int div=__gcd(k,100);

        cout<<(100/div)<<endl;

    }

    return 0;
}
