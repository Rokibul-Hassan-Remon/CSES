#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mod=1e9 +7 ;ni
    cin>>n;

    long long int ans=1;
    while(n--)
    {
        ans= ans<<1;
        ans = ans % mod ;
    }



    cout<< ans << endl;

    return 0;
}

