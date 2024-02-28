///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
const int mx=1e2+123;
int a[mx];

int main()
{
    int n,i;
    cin>>n;

    vector<int>neg,pos,zero;
    zero.pb(0);

    int cn=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]<0) cn++;
        else if(a[i]>0) pos.pb(a[i]);
    }

    if(pos.size()==0)
    {
        if(cn%2!=0)
        {
            int k=0;

            sort(a,a+n);

            for(i=0; i<n && k<1; i++)
            {
                if(a[i]<0)
                {
                    neg.pb(a[i]);
                    k++;
                }
            }

            for(; i<n && k<cn; i++)
            {
                if(a[i]<0)
                {
                    pos.pb(a[i]);
                    k++;
                }
            }
        }

        else
        {

            int k=0;

            sort(a,a+n);

            for(i=0; i<n && k<1; i++)
            {
                if(a[i]<0)
                {
                    neg.pb(a[i]);
                    k++;
                }
            }


            for(; i<n && k<cn-1; i++)
            {
                if(a[i]<0)
                {
                    pos.pb(a[i]);
                    k++;
                }
            }


            for(; i<n && k<cn; i++)
            {
                if(a[i]<0)
                {
                    zero.pb(a[i]);
                    k++;
                }
            }
        }

    }


    else
    {

        if(cn%2!=0)
        {
            int k=0;

            sort(a,a+n);

            for(i=0; i<n && k<cn; i++)
            {
                if(a[i]<0)
                {
                    neg.pb(a[i]);
                    k++;
                }
            }


        }

        else
        {

            int k=0;

            sort(a,a+n);

            for(i=0; i<n && k<1; i++)
            {
                if(a[i]<0)
                {
                    neg.pb(a[i]);
                    k++;
                }
            }


            for(; i<n && k<cn-1; i++)
            {
                if(a[i]<0)
                {
                    pos.pb(a[i]);
                    k++;
                }
            }


            for(; i<n && k<cn; i++)
            {
                if(a[i]<0)
                {
                    zero.pb(a[i]);
                    k++;
                }
            }
        }
    }


    cout<<neg.size();
    for(auto u:neg)
    {
        cout<<" "<<u;
    }

    cout<<endl<<pos.size();

    for(auto u:pos)
    {
        cout<<" "<<u;
    }

    cout<<endl<<zero.size();

    for(auto u:zero)
    {
        cout<<" "<<u;
    }

    return 0;
}
