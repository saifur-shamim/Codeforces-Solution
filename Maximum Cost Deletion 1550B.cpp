///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back
#define mod 1000000007

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,a,b;

        cin>>n>>a>>b;

        string s;
        cin>>s;

        int ans=n*a;

        if(b<=0)
        {
            int i,z=0,cnt1=0;
            for(i=0; i<n; i++)
            {
                if(s[i]=='0')
                {
                    while(s[i]=='0' && i<n)
                    {
                        i++;
                        z++;
                    }

                    cnt1++;
                }
            }

            if(z!=n) cnt1++;
            z=0;
            int cnt2=0;

            for(i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    while(s[i]=='1' && i<n)
                    {
                        i++;
                        z++;
                    }

                    cnt2++;
                }
            }

            if(z!=n) cnt2++;
            int mn=min(cnt1,cnt2);
            ans+=mn*b;
        }
        else
        {
            ans+=n*b;
        }

        cout<<ans<<nl;
    }
}
