
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string s,s2;
    cin>>s;
    
   char extra = 0;
   int c[30]={0};
  /// cout<<c<<endl;
    std::string::size_type left=0, right=s.size()-1;
 
   int nOdd=0,cnst=65;
   bool flag=true;
 
    for (std::string::size_type i = 0; i < s.size(); i++)
        c[(int)s[i]-cnst]++;
 
    /*for(int i=0; i<26; i++)
        cout<<cnst+i<<" "<<(int)c[i]<<endl;*/
 
    for(int i=0; i<26; i++)
    {
        int a=c[i];
 
        for(int j=0; j<a/2; j++)
             s[left++]=s[right--]= (char)(cnst+i);
            
        
        if(c[i]%2!=0)
        {
            if( nOdd<1)
                {
                    nOdd++;
                    extra=(cnst+i);
                }
 
            else
                flag=false;
                
        }
    }
 
    if(flag==false)
        cout<<"NO SOLUTION\n"<<endl; 
 
    else
    {
        if(extra!='\0')
            s[left]=extra;
 
        cout<<s<<endl;
    }
       
    
 
return 0;
 
 
}
