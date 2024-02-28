///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll mat[20][20],h,w,i,j;

        for(i=0; i<20; i++)
        {
            for(j=0; j<20; j++)
            {
                mat[i][j]=0;
            }
        }

        cin>>h>>w;
        ll chk=0;
        for(i=0; i<h; i++)
        {
            if(i==0 || i==h-1)
            {
                for(j=0; j<w; j+=2)
                {
                    mat[i][j]=1;
                }
                chk=1;
            }

            else if(chk==1 && i!=h-1)
            {
                chk=0;
                continue;
            }
            else if(chk==0 && i!=h-1 && i!=h-2)
            {
                mat[i][0]=mat[i][w-1]=1;
                chk=1;
            }
        }

        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                cout<<mat[i][j];
            }
            cout<<nl;
        }

        cout<<nl;
    }
}
