///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i;
        cin>>n;
        string s;
        cin>>s;

        set<char> myst;
        int cnt=1;
        for(i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cnt++;
               myst.insert(s[i]);
            }
        }

        myst.insert(s[n-1]);

        if(cnt==myst.size())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

        myst.clear();
    }

    return 0;
}
