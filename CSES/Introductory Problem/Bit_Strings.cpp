#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mod=1000000007;
    cin>>n;

    long long int res=1;
    res<<n;

    cout<< res  % mod << endl;

    return 0;
}

