///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster;
    int n,k,i;
    cin>>n>>k;

    int ar[n+2];

    map<int,int>mp;
    set<int>st;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i];

        if(i<=k)
        {
            mp[ar[i]]++;

            if(mp[ar[i]]==1)
            {
                st.insert(ar[i]);
            }
            else
            {
                if(st.find(ar[i])!=st.end())
                {
                    st.erase(ar[i]);
                }
            }

            if(i==k)
            {
                if(st.empty())
                {
                    cout<<"Nothing\n";
                }
                else
                {
                    cout<<*(--st.end())<<nl;
                }
            }
        }
        else
        {
            mp[ar[i]]++;
            mp[ar[i-k]]--;

            if(mp[ar[i-k]]==1)
            {
                st.insert(ar[i-k]);
            }
            else
            {
                if(st.find(ar[i-k])!=st.end())
                {
                    st.erase(ar[i-k]);
                }
            }

            if(mp[ar[i]]==1)
            {
                st.insert(ar[i]);
            }
            else
            {
                if(st.find(ar[i])!=st.end())
                {
                    st.erase(ar[i]);
                }
            }

                if(st.empty())
                {
                    cout<<"Nothing\n";
                }
                else
                {
                    cout<<*(--st.end())<<nl;
                }
        }
    }
}
