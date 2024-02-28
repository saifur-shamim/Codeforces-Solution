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
        int n,ar[52],i;

        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        int cnt=0;

        for(i=0; i<n-1; i++)
        {
            int temp,res;

            if((double)max(ar[i],ar[i+1])/(double)min(ar[i],ar[i+1])>2)
            {
                res = min(ar[i],ar[i+1]);
                temp = max(ar[i],ar[i+1]);
                while(2*res<temp)
                {
                    cnt++;
                    res*=2;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
