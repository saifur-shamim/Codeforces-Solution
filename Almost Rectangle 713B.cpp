///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

char ch[405][405];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,cn=0,x1,x2,y1,y2;
        cin>>n;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>ch[i][j];

                if(ch[i][j]=='*' && cn==0)
                {
                    x1=i,y1=j,cn++;
                }

                if(ch[i][j]=='*' && cn==1)
                {
                    x2=i,y2=j;
                }
            }
        }

        if(x1!=x2 && y1!=y2)
        {
            ch[x1][y2]='*';
            ch[x2][y1]='*';
        }

        else if(x1==x2)
        {
            ch[(x1+1)%n][y1]='*';
            ch[(x2+1)%n][y2]='*';
        }
        else
        {

            ch[x1][(y1+1)%n]='*';
            ch[x2][(y2+1)%n]='*';
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<ch[i][j];
            }

            cout<<endl;
        }
    }

    return 0;
}
