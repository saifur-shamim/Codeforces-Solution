///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n;
    cin>>n;

    string s;

    cin>>s;

    int i,cnt=0;
    for(i=0;i<n-1;i+=2)
    {
        if(s[i]=='a' && s[i]==s[i+1])
        {
            cnt++;

            s[i+1]='b';

        }

        else if(s[i]=='b' && s[i]==s[i+1])
        {
            s[i+1]='a';
            cnt++;

        }
    }

    cout<<cnt<<endl<<s<<endl;

    return 0;
}
