#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin>>q;

    while(q--)
    {
        int i;
        long long  int k,cpyK;
        cin>>k;
        cpyK=k;

        long long int sum=0,var=1;

        for( i=1; cpyK -(9*var*i)>0; i++)
        {
            cpyK -= (9*var*i);

            var *= 10;

        }
       
        k=cpyK;
        cpyK = cpyK/i;                /// kth number from 10^i 
        k-= cpyK*i;                   /// position of a digit in a number 
        long long int Number ;
        
        if(k==0)
        {
            cpyK--;
            k=i;
        }
           
        
         Number= cpyK + var - 1 ;   /// that's why i should -1 bcz (10^i) is also a nmbr . 

        

        int after,before=after=var;
        
        for(int j=2;j<=k;j++)
            after /= 10;

        before =after*10;

        Number=Number%before;
        Number=Number%after;

        cout<<Number<<endl;
        
         

    }
    return 0;
}