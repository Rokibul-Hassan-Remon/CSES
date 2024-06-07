#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    long long int result= n*(n+1)/2;

    long long int sum=0;

    for(int i=1; i<n;i++)
    {
       long long int a;
        cin>>a;

        sum= sum+a;
    }
    

    result= result - sum;
    
    cout<<result<<endl;

    return 0;
}