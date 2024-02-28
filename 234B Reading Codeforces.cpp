///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>


using namespace std;
int main()
{
    

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

int n,k,mn,i,a[1005],b[1005];
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b,b+n,greater<int>());

     mn=b[k-1];

    cout<<mn<<endl;

    for(i=0;i<n && k>0;i++)
    {
        if(a[i]>=mn)
        {
            cout<<i+1<<" ";
            k--;
        }
    }

    cout<<endl;

    return 0;
}
