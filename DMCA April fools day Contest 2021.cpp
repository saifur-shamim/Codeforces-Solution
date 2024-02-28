///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>=10)
    {
        int sum = 0;
        int tmp = n;
        while(tmp)
        {
            sum += tmp%10;
            tmp/=10;
        }
        n = sum;
    }
    cout<<n<<endl;
}
