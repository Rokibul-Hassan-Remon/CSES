#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int c;
    cin>>c;

    if(c>1 && c<4)
        {
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
        
    for(int j=2; j<=c; j+=2)
        cout<<j<<" ";
    
    for(int i=1;i<=c;i+=2)
        cout<<i<<" ";

    return 0;
}