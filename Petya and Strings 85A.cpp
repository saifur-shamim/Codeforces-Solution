///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    string a,b;
    cin>>a>>b;

    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    if(a==b)
        cout<<"0\n";
    else if(a<b)
        cout<<"-1\n";
    else  cout<<"1\n";

    return 0;
}
