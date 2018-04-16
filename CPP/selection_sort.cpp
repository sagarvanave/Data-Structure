#include<iostream>  
using namespace std; 
#define max 100 
class A 
{ 
     public: 
     int temp,i,j,no,a[max]; 
     public:      void read() 
     { 
cout<<"Enter how many value you want to enter"; 
         cin>>no; 
         for(i=0;i<no;i++) 
         { 
               cin>>a[i]; 
          } 
     } 
     void sort() 
     { 
          for(i=0;i<no;i++) 
          { 
               int pos=i; 
               for(j=i+1;j<no;j++) 
               { 
                    if(a[pos]>a[j]) 
                    { 
                         pos=j; 
                    } 
               } 
               if(pos!=i) 
               { 
                    temp=a[i];                     a[i]=a[pos];                     a[pos]=temp; 
               } 
          for(int k=0;k<no;k++) 
          { 
               cout<<a[k]<<'\t'; 
         } 
         cout<<endl;
         } 
     } 
 }; 
int main() 
{ 
     A o; 
     o.read(); 
     o.sort();      return 0; 
} 

