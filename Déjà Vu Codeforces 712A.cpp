///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string s,b,c;
        cin>>s;

        ll i,n=s.size();

        b=s,c=s;

        sort(c.begin(),c.end());
        if(c[0]==c[n-1] && c[0]=='a')
            cout<<"NO"<<endl;
        else
        {
            reverse(b.begin(),b.end());

            if(s==b)
            {
                cout<<"YES\n";
                cout<<s<<"a"<<endl;
            }

            else
            {
                if(s[0]=='a' && s[n-1]!='a')
                {
                    cout<<"YES\n";
                    cout<<"a"<<s<<endl;
                }

                else if(s[0]!='a' && s[n-1]=='a')
                {
                    cout<<"YES\n";
                    cout<<s<<"a"<<endl;
                }

                else
                {
                    cout<<"YES\n";
                    ll cnt1=0,cnt2=0;
                    for(i=0; i<n; i++)
                    {
                        if(s[i]!='a')
                            break;
                        else
                            cnt1++;
                    }

                    for(i=n-1; i>=0; i--)
                    {
                        if(s[i]!='a')
                            break;
                        else
                            cnt2++;
                    }

                    if(cnt1>=cnt2)
                        cout<<"a"<<s<<endl;
                    else
                        cout<<s<<"a"<<endl;
                }

            }
        }
    }

    return 0;
}
