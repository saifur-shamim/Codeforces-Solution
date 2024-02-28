///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,a[102],b[103],x;
        cin>>n;

        memset(b,0,sizeof(b));
        for(i=0; i<n; i++)
        {
            cin>>a[i];

            b[a[i]]++;
        }

        for(i=1; i<=100; i++)
        {
            if(b[i]==1)
            {
                x=i;
                break;
            }

        }


        for(i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}
