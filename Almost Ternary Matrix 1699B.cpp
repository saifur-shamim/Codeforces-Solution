///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


void fun(int m,int a)
{
    for(int i=1;i<=m;i+=2)
    {
        if(a)
        {
            cout<<"1 0 ";
        }
        else{
            cout<<"0 1 ";
        }
        a^=1;
    }
    cout<<endl;
}

int main()
{



    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int i,j;

        int p=1;

        for(i=1;i<=n;i+=2)
        {
            if(p)
            {
                fun(m,1);
                fun(m,0);
            }
            else{
                fun(m,0);
                fun(m,1);
            }

            p^=1;
        }


    }

    return 0;
}
