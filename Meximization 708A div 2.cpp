///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int
#define rt return 0

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
      ll n,i,a[105],x;

       cin>>n;

       memset(a,0,sizeof a);

       for(i=0;i<n;i++)
       {
           cin>>x;

           a[x]++;
       }

       for(i=0;i<103;i++)
       {
           if(a[i])
           {
               cout<<i<<" ";
               a[i]--;
           }

       }

       for(i=0;i<103;i++)
       {
           while(a[i])
           {
               cout<<i<<" ";
               a[i]--;
           }

       }

      cout<<endl;
    }

    rt;
}
