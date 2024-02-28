///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster;

    string s;
    cin>>s;

    int i,n=s.length();

    for(i=0; i<n; i++)
    {
        if(i+2<n && s[i]==s[i+1] && s[i+1]==s[i+2])
        {
            s[i]='*';
        }
        else if(i+3<n && s[i]==s[i+1] && s[i+2]==s[i+3])
        {
            /// bbcccccccd => bbcd
            for(int j=i+3; j<n; j++)
            {
                if(s[j]==s[i+2])
                {
                    s[j]='*';
                }
                else
                {
                    i=j-1;
                    break;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(s[i]!='*')
        {
            cout<<s[i];
        }
    }

    return 0;
}
