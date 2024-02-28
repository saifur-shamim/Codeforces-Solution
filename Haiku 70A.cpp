///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[4];

int main()
{
    int tc=3,j=1;

    while(tc--)
    {
        string s;
        char ch;
        cin>>ch;
        getline(cin,s);
        s=ch+s;
        int l=s.length();

        for(int i=0; i<l; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' )
                a[j]++;
        }

        j++;
    }

    if(a[1]==5 && a[2]==7 && a[3]==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
