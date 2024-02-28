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
        ll n,i,j;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;

        vector<int> vec(n,0);

        ll cnt=0;

        for(i=0;i<n;i++)
        {
            if(s2[i]=='1' && s1[i]=='0')
            {
                cnt++;
            }
            else if(s2[i]=='1' && s1[i]!='0')
            {
                int left=i-1,right=i+1;

                if(left>=0 && vec[left]==0 && s1[left]=='1')
                {
                    cnt++;
                    vec[left]=1;
                }
                else if(right<n && vec[right]==0 && s1[right]=='1')
                {
                    cnt++;
                    vec[right]=1;
                }
            }
        }

        cout<<cnt<<nl;
    }
}
