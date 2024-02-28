///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define mod 1000000007

int main()
{
    int n,i;
    cin>>n;

    stack <int> st;

    int ans=0,curr=1;
    n*=2;
    while(n--)
    {
        string s;
        cin>>s;

        if(s[0]=='a')
        {
            int x;
            cin>>x;

            st.push(x);
        }
        else
        {
            if(!st.empty())
            {
                if(st.top()==curr)
                {
                    st.pop();
                }
                else
                {
                    ans++;
                    while(!st.empty())
                    {
                        st.pop();
                    }
                }
            }

            curr++;
        }
    }

    cout<<ans<<nl;
}
