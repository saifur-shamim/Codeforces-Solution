#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll f = 1;
        for(ll i=0; i<n-1 && f==1; i++)
        {
            if(a[i]<a[i+1])
            {
                f = 0;
                while(a[i+1]>=a[i] && i<n-1)
                {
                    i++;
                }
                if(i == n-1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        if(f == 1) cout<<"YES"<<endl;
    }
    return 0;
}
Write to Geerbani Pal Shashi

