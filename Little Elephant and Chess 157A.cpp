///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{

    string a="WBWBWBWB",b="BWBWBWBW";
    vector<string> v;
    for(int i=1; i<=8; i++)
    {
        string s;
        cin>>s;
        if(s==a || s==b)
        {
            v.push_back(s);
        }
    }

    if(v.size()==8)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
