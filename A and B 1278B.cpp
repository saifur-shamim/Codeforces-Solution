///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,i;

        cin>>a>>b;

        ll dif=abs(a-b);

        if(dif==0) cout<<"0\n";

        else
        {
            ll sum,cnt=0;
            for(i=1;; i++)
            {
                sum=(i*(i+1))/2;

                if(sum%2!=dif%2) continue;

                else if(dif>sum)  continue;
                else
                {
                    cnt=i;
                    break;
                }
            }

            cout<<cnt<<endl;
        }
    }

    return 0;
}
