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
        ll n,x,i;

        cin>>n;
        map <ll,ll>mp;

        for(i=0; i<n; i++)
        {

            cin>>x;
            if(x==3)
                x=1;
            mp[x]++;

        }

        cout<<mp[1]<<endl;
    }

    return 0;
}
