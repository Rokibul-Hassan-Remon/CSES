#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    cin>>c;

    int mx=0,i=0;

    for(int j=0; j< c.size(); j++)
    {
        if(c[j]==c[j+1])
        {
            i++;
            ///cout<<c[j];
        }
            

        else
        {
             mx=max(mx,i);
             i=0;
             ///cout<<c[j]<<" ";
        }
    }

        
    cout<<mx+1<<endl;

    return 0;
}