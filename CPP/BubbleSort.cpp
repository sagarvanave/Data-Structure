#include<iostream>  
using namespace std; 
#define max 100 
class bubble  
{ 
     public:      int ar1[max];      int no;      void getdata() 
     { 
          cout<<"Enter how many value you want to enter";  
          cin>>no;  
  cout<<"Enter your values for sorting";    for(int i=0;i<no;i++)  
          {  
               cin>>ar1[i];  
          }  
     }  
          void sortdata()  
          {  
               for(int i=0;i<no;i++)  
               { 
                    for(int j=1;j<no;j++)  
                    { 
                         int temp; 
                         if(ar1[j-1]>ar1[j])  
                   {  
                         temp=ar1[j];                           ar1[j]=ar1[j-1];                           ar1[j-1]=temp;  
                         }                      } 
          for(int k=0;k<no;k++) 
          {      
               cout<<ar1[k]<<'\t';  
          } 
     cout<<endl; 
          } 
      
     }  
};  int main()  
{  
     bubble obj;       obj.getdata();       obj.sortdata();       return 0; 
 }  

