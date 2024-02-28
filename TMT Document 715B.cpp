///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i;

        cin>>n;

        string s;
        cin>>s;

        if( s[0]== 'M' || s[n-1]== 'M' )
        {
            cout<<"NO\n";

            continue;
        }

        else
        {
            ll cntT1=0,cntM1=0,cntT2=0,cntM2=0,j,x=n/3,lft[n],rgt[n];
            for(i=0,j=n-1; i<n,j>=0; i++,j--)
            {
                if(s[i]=='T')
                {
                    cntT1++;
                }

                else
                {
                    cntM1++;
                    lft[cntM1]=cntT1;
                }

                if(s[j]=='T')
                {
                    cntT2++;
                }

                else
                {
                    cntM2++;
                    rgt[cntM2]=cntT2;
                }
            }

            if( cntT1 > ( (n/3)*2) )
                cout<<"NO\n";

            else if(cntM1 > (n/3))
                cout<<"NO\n";
            else
            {
                int flag=0;
                for(i=1; i<=x; i++)
                {
                    //cout<<"i = "<<i<<endl;
                    //cout<<" lft["<<i<<"]="<<lft[i]<<" rgt ["<<i<<"]="<<rgt[i]<<endl;
                    if(lft[i]<i || rgt[i]<i)
                    {
                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }

    return 0;
}
