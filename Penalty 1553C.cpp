///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back
#define mod 1000000007

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        string s;
        cin>>s;

        ll x=0,y=0;

        ll i,ans1=10,ans2=10;

        for(i=0; i<10; i++)
        {
            ll due=(10-i+1)/2;

            if(x>y+due)
            {
                ans1=i;
                break;
            }

            if(i%2==0)
            {
                if(s[i]!='0') x++;
            }
            else
            {
                if(s[i]=='1') y++;
            }
        }

        x=0,y=0;

        for(i=0; i<10; i++)
        {
            ll due=(10-i)/2;

            if(y>x+due)
            {
                ans2=i;
                break;
            }
            if(i%2==1)
            {
                if(s[i]!='0') y++;
            }
            else
            {
                if(s[i]=='1') x++;
            }
        }

        cout<<min(ans1,ans2)<<nl;
    }

    return 0;
}
