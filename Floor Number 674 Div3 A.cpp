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
        int n,x,ans;

        cin>>n>>x;

        if(n<=2)
        {
            cout<<"1\n";
        }

        else
        {
            if((n-2)%x==0)
                ans=((n-2)/x)+1;

            else
                ans=((n-2)/x)+2;


            cout<<ans<<endl;
        }
    }

    return 0;
}
