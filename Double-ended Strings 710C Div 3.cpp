///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int
#define rt return 0
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;

        int a,b,i,j,res=0;
        a=s1.size();
        b=s2.size();

        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                int cnt=0;
                if(s1[i]==s2[j])
                {
                    for(int k=i,l=j; k<a,l<b; k++,l++)
                    {
                        if(s1[k]==s2[l])
                            cnt++;
                        else
                            break;
                    }

                    res=max(res,cnt);
                }
            }
        }

        cout<<(a+b)-(res*2)<<endl;
    }
    rt;
}
