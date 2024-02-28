///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        string s;
        cin>>s;

        char ch=97;

        ll i,len=s.length(),posA=-1;

        for(i=0; i<len; i++)
        {
            if(s[i]=='a')
            {
                posA=i;
                //cout<<"pos of a "<<posA<<nl;
                break;
            }
        }

        if(posA!=-1)
        {
            ll left=posA-1,right=posA+1;
            bool f=true;
            ch++;
            while(left>=0 || right<len)
            {
                //cout<<"left = "<<left<<" right = "<<right<<nl;
               // cout<<"ch = "<<ch<<nl;
                if(left>=0 && s[left]==ch)
                {
                   // cout<<"1st cond left "<<nl;
                    left--;
                    ch++;
                }
                else if(right<len && s[right]==ch)
                {
                    //cout<<"2nd cond right "<<nl;
                    right++;
                    ch++;
                }
                else
                {
                   // cout<<"3rd cond "<<nl;
                    f=false;
                    break;
                }
            }

            if(f==true) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
