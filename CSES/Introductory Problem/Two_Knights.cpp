#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i;
    cin>>i;

    for( int n=1 ; n <= i ; n++ )
    {
        long long int res=0;

        res= (n*n);
        res = res*(res-1)/2;
        res -= 4*(n-1)*(n-2);

        cout<<res<<endl;
    
    }

    return 0;
}