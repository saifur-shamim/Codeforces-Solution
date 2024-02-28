///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;

        cin>>s;

        int i,chk=0;

        for(i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1] && s[i]=='1')
                break;
        }

        for(; i<s.size(); i++)
        {
            if(s[i]==s[i+1] && s[i]=='0')
            {
                chk=1;
                break;
            }

        }

        if(chk) //chk==1
            cout<<"NO\n";

        else

            cout<<"YES\n";

    }

    return 0;
}
