#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> vec;
    int i,j;
    for(i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    long long int cnt=0;
    for(i = 1; i < n; i++ )
    {
        if( vec[i - 1] > vec[ i ] )
        {
            cnt = cnt + vec[ i - 1 ] - vec[ i ] ;
            vec[ i ] = vec[ i - 1 ];
          
        }
    }

    cout<<cnt<<endl;

    return 0;
}