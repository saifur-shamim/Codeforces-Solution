///Bismillahir Rahmanir Rahim
///Happy Codign

#include<bits/stdc++.h>
#include<math.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,x,y,ans,n,sm=0,k;

        cin>>a>>b>>c;

        x=pow(10,a-1);
        y=pow(10,b-1);
        ans=n=min(x,y);
        n+=pow(10,c-1);

        while(sm!=c)
        {
            sm=0;
            k=__gcd(ans,n++);

            while(k) k/=10,sm++;

        }

        if(x==ans)
            cout<<n-1<<" "<<y<<endl;
        else
            cout<<x<<" "<<n-1<<endl;
    }

    return 0;
}
