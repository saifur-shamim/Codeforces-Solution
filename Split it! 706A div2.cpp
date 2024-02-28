///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int
#define rt return 0

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        string s;
        cin>>n>>k;
        cin>>s;

        ll i,cnt=0;

        for(i=0;i<n/2;i++)
        {
            if(s[i]==s[n-i-1]) cnt++;
            else break;

            if(cnt==k) break;
        }

        if(k==0) cout<<"YES\n";
        else if(cnt==k && cnt*2<n) cout<<"YES\n";
        else cout<<"NO\n";
    }

    rt;
}
