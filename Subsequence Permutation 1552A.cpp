
///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int tc;

    cin>>tc;

    while(tc--)
    {
        int n,i,cnt=0;
        cin>>n;
        string s1,s2;
        cin>>s1;
        s2=s1;

        sort(s2.begin(),s2.end());

        for(i=0;i<n;i++)
        {
            if(s1[i]!=s2[i]) cnt++;
        }

        cout<<cnt<<nl;
    }

    return 0;
}
