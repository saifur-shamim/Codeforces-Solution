

#include<bits/stdc++.h>

using namespace std;

typedef  vector<int> vi;


#define     PB        push_back
#define     all(a)    (a).begin(),(a).end()
#define     YES       cout<<"YES\n"
#define     NO        cout<<"NO\n"



int main()
{



    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x,i;
        cin>>n>>x;

        vi v;

        for(i=0;i<2*n; i++)
        {
            int a;
            cin>>a;
            v.PB(a);
        }

        sort(all(v));
        i=0;
        int j=n;

        bool f=true;

        while(i<n)
        {
            if(v[j]<v[i]+x)
            {
                f=false;
                break;
            }
            i++;
            j++;

        }

        if(f) YES;
        else NO;
    }
    return 0;
}
