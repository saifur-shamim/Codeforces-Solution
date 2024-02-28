///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d,i;

    cin>>a>>b;
    cin>>c>>d;

    double j;

    for(i=0;i<=100;i++)
    {
        j=(b+a*i-d)*1.00/c;

        if(j>=0 && j==(int)j)
        {
            cout<<(b+a*i);
            return 0;
        }
    }

    cout<<"-1";

    return 0;
}
