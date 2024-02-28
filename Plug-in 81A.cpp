///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'


int main()
{
    string s;
    cin>>s;

    int len=s.length();

    stack<char> st;

    for(int i=len-1; i>=0; i--)
    {
        if(st.size()==0)
        {
            st.push(s[i]);
        }
        else
        {

            if(st.top()==s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;

    return 0;
}
