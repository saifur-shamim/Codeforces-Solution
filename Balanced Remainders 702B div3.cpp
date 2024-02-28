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
        ll n,i,x,ar[4];
        memset(ar,0,sizeof ar);


        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>x;

            ar[x%3]++;
        }
        ll mx=max(ar[2]-ar[1],max(ar[1]-ar[0],ar[0]-ar[2]));

        cout<<mx<<endl;
    }

    return 0;
}
