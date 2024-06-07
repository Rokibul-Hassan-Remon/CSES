#include<bits/stdc++.h>
using namespace std;



   long long int func(long long int cnr)
        { return    cnr * ( cnr - 1 ) + 1 ; }


    long long  int increasing( long long  N , int mx , int j )
        { return   N + ( mx - j ) ; }


    long long  int decreasing(long long  N , int mx , int j )
        { return   N - ( mx - j ) ; }


int main()
{

    int t;
    cin>>t;

    while(t--)
    {
       long long int i,j;
        cin>>i >>j;
       ////// cout<<endl<<"{"<<endl;
            
        long long mx = max(i,j);
      /////////  cout<<"max= " <<mx<<endl;
        
        
        long long num=func(mx);
       /////////// cout<<"function returned value = " <<num<<endl;

        if ((mx & 1)  == 0)                                /// even chekcing
        {
                /////////cout<<"it is even called"<<endl;
            if(mx == i )                               /// row   is   fixed
              { num =  increasing(num,mx,j);
               //////////cout<<"row   is   fixed"<<endl;
              }
            else
            {                                     /// column   is fixed
                num = decreasing(num,mx,i);
               ////////// cout<<"column   is   fixed"<<endl;
            }
        
        }

        else{       
                  ////////  cout<<"it is odd called"<<endl;                                   /// either odd

            if(mx==i)                                /// row   is    fixed
                {
                    num=decreasing(num,mx,j);
                   ///////// cout<<"row   is   fixed"<<endl;
                }
            else{                                     /// column   is   fixed
                num = increasing(num , mx , i );
               ////////// cout<<" col   is   fixed"<<endl;
               }

        }



        cout<<num<<endl;///////////"}"<<endl<<endl;

    }
    
    return 0;
}