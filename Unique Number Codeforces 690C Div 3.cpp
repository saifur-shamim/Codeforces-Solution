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
        ll x,i;
        cin>>x;

        string s;

        for(i=9; i>0; i--)
        {
            if(x-i>0)
            {
                s+='0'+i;
                x-=i;
            }

            else
            {
                s+='0'+x;
                x=0;
                break;
            }
        }

        if(i)
        {
            reverse(s.begin(),s.end());

            cout<<s<<endl;
        }

        else
        {
            cout<<"-1\n";
        }

        s.clear();
    }

    return 0;
}
