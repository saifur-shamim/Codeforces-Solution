///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;

#define PB push_back
#define endl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll k,n,a,b;

        cin>>k>>n>>a>>b;

        ll ans=0;
        if(min(a,b)*n>=k)
        {
            cout<<"-1\n";

        }
        else
        {
            ll l=0,r=n;

            while(l<=r)
            {
                ll mid=(l+r)/2;

                ll x=mid*a;
                ll y=(n-mid)*b;

                if(x+y<k)
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            cout<<ans<<endl;
        }
    }
}
