///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll sz=2e5+5;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,a[sz],i,sum=0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

       if(sum%n==0)
       {
           sort(a,a+n);

           ll avg=sum/n;

           i=0;

           while(a[i]<=avg && i<n)
           {
               i++;
           }

           cout<<n-i<<endl;
       }
       else{
        cout<<"-1\n";
       }
    }
}
