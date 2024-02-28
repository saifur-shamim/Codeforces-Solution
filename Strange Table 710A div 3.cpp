///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)

    {
        ll n,m,x,row,col;

        cin>>n>>m>>x;

        col = (x+n-1)/n;
        row = x - n*(col-1);

        cout << (row-1)*m + col << endl;
    }

    return 0;
}
