#include<bits/stdc++.h>
using namespace std;

int main()
{

   long long int n, sum=0, result=0;
    cin>>n;
    result= (n*(n+1))/2;

    
    while(n!= 1)
    {
        long long int b;
        cin>>b;
        sum+= b;
        n--;
    }

    result -= sum;

    cout<<result<<endl;

    return 0;
}