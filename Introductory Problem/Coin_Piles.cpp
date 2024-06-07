#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    while(n--)
    {
        int a,b;
        cin>>a>>b;

        if((a+b)%3==0 && (a==0) && (b==0))
            cout<<"YES";
        else
            cout<<"NO";
        
        cout<<endl;
    }

    return 0;
}