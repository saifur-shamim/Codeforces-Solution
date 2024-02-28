///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    optimize();

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,a[102],i,rt,f=0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];

            rt=sqrt(a[i]);

            if(rt*rt != a[i])
                f=1;
        }



        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}



