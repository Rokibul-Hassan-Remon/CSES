#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int c=0;
    for( ; n/5!=0 ; )
    {
        n=n/5 ;
        c += n;
    }

    cout << c <<endl;
    return 0;
}