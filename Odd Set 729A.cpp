///Bismillahir Rahmanir Rahim
///Happy Coding
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
  ll tc;
  cin>>tc;

  while(tc--)
  {
      ll n,i,odd=0,ar[202];

      cin>>n;

      for(i=0;i<2*n;i++)
      {
          cin>>ar[i];

          if(ar[i]%2!=0) odd++;
      }

      if(odd==n) cout<<"Yes\n";
      else cout<<"No\n";
  }
}
