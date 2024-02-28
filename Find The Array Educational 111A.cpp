///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i=1,sum=0,cnt=0;

        cin>>n;

        while(sum<n)
        {
            cnt++;
            sum+=i;
            i+=2;
        }

        cout<<cnt<<nl;
    }
}
