///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define mod 1000000007


int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll a,b;

        cin>>a>>b;

        if(a==b)
        {
            cout<<"0 0\n";
            continue;
        }


        ll dif=abs(a-b);

        ll rem1=a%dif,rem2=b%dif;

        if(rem1==rem2)
        {
            cout<<dif<<" "<<min(rem1,dif-rem1)<<nl;
        }
        else
        {
            cout<<"1 0\n";
        }

    }

    //3
    //1000000000000000000 200000000000000000
}
