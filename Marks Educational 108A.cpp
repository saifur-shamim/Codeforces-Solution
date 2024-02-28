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

    vector<string>v(n);

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<bool>pos(n,false);

    for(i=0; i<m; i++)
    {
        char best='0';

        for(int j=0; j<n; j++)
        {
            if(v[j][i]>best)
            {
                best=v[j][i];
            }
        }

        for(int j=0; j<n; j++)
        {
            if(v[j][i]==best)
            {
                pos[j]=true;
            }
        }
    }

    cout<<count(pos.begin(),pos.end(),true);

    return 0;
}
