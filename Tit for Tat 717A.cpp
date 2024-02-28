///Bismillahir Rahmanir Rahim

///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,k,a[102],i;

        cin>>n>>k;

        for(i=0; i<n; i++) cin>>a[i];

        int j=n-1,cnt=k;
             i=0;
        while(cnt>0 && i!=j && i<n )
        {
            if(a[i]>0)
            {
                a[i]--;
                a[j]++;

                cnt--;
            }

            else
            {
                i++;
            }
        }

        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }

    return 0;

}
