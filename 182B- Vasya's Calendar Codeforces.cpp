///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll d,n,ar[2005],i;

    cin>>d>>n;

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    ll sum=0;
    for(i=0;i<n-1;i++)
    {
       sum+=abs(ar[i]-d);
    }

    cout<<sum<<endl;

    return 0;
}
