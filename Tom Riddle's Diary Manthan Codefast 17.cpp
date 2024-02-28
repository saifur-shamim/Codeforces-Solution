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

    map<string, int> m;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;

        m[s]++;

        if(m[s]>1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
