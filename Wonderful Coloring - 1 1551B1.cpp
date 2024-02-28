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
        string s;
        cin>>s;

        ll len=s.length();

        map <char, int> mp;

      map <char, int> :: iterator it;

        for(ll i=0;i<len;i++)
        {
            mp[s[i]]++;
        }



      ll sum=0;

      for(it=mp.begin();it!=mp.end();it++)
      {
          if(it->second<=2)
          {
              sum+=it->second;
          }
          else{
            sum+=2;
          }
      }

      cout<<sum/2<<nl;
    }
}
