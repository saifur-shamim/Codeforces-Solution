///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int n,i,k,cnt=1;

    cin>>n>>k;
    stack<int> st;
    vector<int> vc;

    st.push(n+1);

    for(i=1; i<=n; i++)
    {
        int x;
        if(i<=k) cin>>x;
        else x=st.top()-1;
        vc.push_back(x);
        st.push(x);

        while(!st.empty() && st.top()==cnt)
        {
            st.pop();

            cnt++;
        }
    }

    if(!st.empty())
    {
        cout<<"-1\n";
    }
    else
    {

        for(i=0; i<vc.size(); i++)
        {
            cout<<vc[i]<<" ";
        }
    }
}
