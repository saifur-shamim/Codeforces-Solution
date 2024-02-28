#include<bits/stdc++.h>
using namespace std;

int Bigmod(int a, int b , int mod)
{
    if(b == 0) return 1%mod;
    int x=Bigmod(a,b/2,mod);
    x=(x*x)%mod;

    if(b%2==1)
        x=(x*a)%mod;

    return x;

}


int main ()
{
    int base , power , mod;
    cin>>base>>power>>mod;

    cout<< Bigmod(base,power,mod) <<endl;
    return 0;
}

