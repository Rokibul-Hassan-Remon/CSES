#include<bits/stdc++.h>
using namespace std;

void insert (int n, vector <int> &v, vector <int> &a)
{
     int sum = n+1, i=1 ;

     
      if( n%2 == 1 )
        { i=0; sum = n;
        ////cout<<"odd"<<endl;
         }

            for( i  ; i< n / 2 ; i++)
            {
                v.push_back(i);    v.push_back(sum - i );
                a.push_back(++i);  a.push_back(sum - i );
            }
}

int main()
{

    int n;
    cin>>n;

    vector <int> v,a;

    int i=0;
    

        if(( n + 1 ) % 4  == 0)
  
            { 
                 insert(n,v,a) ;
                v.erase(v.begin());
           }
            
    
        else if(( n % 4 ) == 0)
             insert(n,v,a);

        else
            { 
                cout<<"NO"<<endl;
                return 0;
            }     

        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;


        cout<<a.size()<<endl;
        for(i=0 ; i <a.size() ; i++ )
            cout<<a[i]<<" ";
        cout<<endl;
    

    return 0;
}