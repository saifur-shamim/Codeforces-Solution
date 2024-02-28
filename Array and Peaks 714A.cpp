///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,k,div;
        cin>>n>>k;

       div=(n-3)/2;
        div++;



        if(k==0)
        {
            for(i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }

            cout<<endl;
        }


        else if(n<3 || n==k || k>div)
        {
            cout<<"-1\n";
        }
        else
        {

            int j,cnt=0,x=0;
            for(i=1,j=n; cnt<n && x<k;)
            {
                if(cnt%2==0)
                {
                    cout<<i<<" ";
                    i++;
                }
                else
                {
                    cout<<j<<" ";
                    j--;
                }
                if(cnt==2)
                    x++;
                else if(cnt>2 && cnt%2==0)
                    x++;
                cnt++;
            }

            for(; i<=j; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}
