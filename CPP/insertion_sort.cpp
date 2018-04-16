#include<iostream>  
using namespace std; 
#define max 100 
class A 
{ 
     public: 
     int temp,i,j,no,a[max]; 
     public: 
     void readdata() 
     { 
          cout<<"Enter values you want to enter"; 
          cin>>no; 
          for(i=0;i<no;i++) 
          { 
               cin>>a[i]; 
          } 
} void sorting() 
{ 
         for(int i=1;i<no;i++) 
          { 
               temp=a[i]; 
               for(int j=i;j>0;j--) 
               { 
                    if(temp<a[j-1]) 
                    { 
                         int t;                          t=a[j]; 
                         a[j]=a[j-1];                          a[j-1]=t; 
                    } 
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
     o.readdata(); 
o.sorting(); return 0; 
}

