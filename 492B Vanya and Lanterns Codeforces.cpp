///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,l,a[1005],i;

    cin>>n>>l;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int res=2*max(a[0],l-a[n-1]);

    for(i=0;i<n-1;i++)
    {
        res=max(res,a[i+1]-a[i]);
    }

    printf("%.10f\n",res/2.);

    return 0;

}
