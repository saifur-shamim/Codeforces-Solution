///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
int main()
{

   ll tc;

   cin>>tc;
   while(tc--)
   {
       ll n,div;

       cin>>n;

       div=n/10;

       if(n%10==9) div++;
       cout<<div<<nl;

   }

   return 0;
}
