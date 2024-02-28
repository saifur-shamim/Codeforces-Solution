///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n,m,i;

    cin>>n>>m;

    map <string, string> ipname;

    for(i=0;i<n;i++)
    {
        string name,ip;
        cin>>name>>ip;

        ipname[ip]=name;
    }

    for(i=0;i<m;i++)
    {
        string name,ip;

        cin>>name>>ip;

        ip.pop_back();

        cout<<name<<" "<<ip<<"; #"<<ipname[ip]<<endl;
    }

    return 0;
}
