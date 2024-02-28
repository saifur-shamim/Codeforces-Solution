///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    int n;
    cin>>n;

    vector<pair<string, string>> v;

    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        v.push_back({s1,s2});

    }

    sort(v.begin(),v.end());

    int sz=unique(v.begin(),v.end())-v.begin();

    cout<<sz<<endl;

    return 0;
}
