///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define nl '\n'

int main()
{
    int tc;

    cin>>tc;

    while(tc--)
    {
        int n,i,n2;
        cin>>n;
        n2=n;

        string s1,s2;

        int ans=0;

        while(n>0)
        {
            int temp=n,m=0,p=1,rem;

            while(temp)
            {
                rem=temp%10;
                temp=temp/10;
                if(rem!=0)
                {
                    m+=p;
                }
                p*=10;
            }

            ans++;

            n-=m;
        }

        cout<<ans<<nl;
    }
}
