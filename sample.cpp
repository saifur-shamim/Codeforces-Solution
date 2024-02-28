#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;
const ll N=1e5+10;
const ll M=1e9+7;
ll mp[N];
ll ar[N];


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {


    ll n,mx=0;
    cin>>n;

    ll a[n+1]={0};

    ll x=n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<-1<<endl;
    else
    {


        if(n%2==0)
        {


           x++;
           a[n]=x;
           a[n-1]=2;
           a[n-2]=2;
           for(ll i=1;i<n-2;i++)
           {
               a[i]=1;
           }
        }
        else
        {
            a[n]=x;
           a[n-1]=2;
           for(ll i=1;i<n-1;i++)
           {
               a[i]=1;
           }
        }

        for(ll i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    }



}
