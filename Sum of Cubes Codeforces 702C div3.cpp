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
        ll n,i,x,y,a;
        cin>>n;

        string ans="NO";
        for(i=1; i<=cbrt(n); i++)
        {
            x=i*i*i;
            a=n-x;

            y=ceil(cbrt((double)a));

            if(y*y*y==a && a)
            {
                ans="YES";
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
