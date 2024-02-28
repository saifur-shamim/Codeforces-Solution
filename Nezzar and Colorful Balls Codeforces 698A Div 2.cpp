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
        ll n,i,ar[105],cnt=0,mx=0;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        for(i=0; i<n-1; i++)
        {
            if(ar[i]==ar[i+1])
            {
                cnt++;
                mx=max(cnt,mx);
            }

            else
            {
                cnt=0;
                mx=max(cnt,mx);
            }
        }

        cout<<mx+1<<endl;
    }

    return 0;
}
