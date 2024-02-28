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
        ll n,i,x;
        cin>>n;

        vector <ll> odd,even;

        for(i=0; i<n; i++)
        {
            cin>>x;

            if(x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);
        }

        for(i=0; i<odd.size(); i++)
            cout<<odd[i]<<" ";
        for(i=0; i<even.size(); i++)
            cout<<even[i]<<" ";

        cout<<endl;

    }

    return 0;
}
