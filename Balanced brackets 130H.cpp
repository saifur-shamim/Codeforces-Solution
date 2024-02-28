//Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool balanced(char a,char b)
{
    return(a=='(' && b==')') ;
}

int main()
{
    optimize();

    string s;
    cin>>s;

    stack<char> st;

    bool done=1;

    for(auto u:s)
    {
        if(u=='(')
        {
            st.push(u);
        }
        else
        {

            if(st.empty())
            {
                done=0;
                break;
            }
            else
            {
                if(balanced(st.top(),u))
                {
                    st.pop();
                }

                else
                {
                    done=0;
                    break;
                }
            }
        }
    }

    if(!st.empty()) done=0;

    if(done==1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
