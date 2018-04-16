#include<iostream> 
#define max 100 
using namespace std; 
class Binary 
{ 
     public: 
     int size,key,mid,i,j,temp,low,high,a[max]; 
     void read() 
     { 
          cout<<"Enter size of array"; 
          cin>>size; 
          for(i=0;i<size;i++) 
          { 
               cout<<"Enter your data "<<i+1<<'\t'; 
               cin>>a[i]; 
          } 
     } 
void sort() 
     { 
      
          for(i=0;i<size;i++) 
                {                         int pos=i;                         for(j=i+1;j<size;j++)                         {                                 if(a[pos]>a[j])                                 {                                         pos=j; 
                                }                         }                         if(pos!=i)                         {                                 temp=a[i];                                 a[i]=a[pos];                                 a[pos]=temp; 
                        } 
          } 
               cout<<"data after sorting "<<endl;           for(int k=0;k<size;k++) 
          { 
               cout<<a[k]<<endl; 
          } 
     } 
     void binary() 
     { 
         cout<<"Enter key value you want to search"; 
          cin>>key;           low=0; 
              high=size-1; 
              for(i=low;i<high;i++) 
               { 
                    mid=(low+high)/2;                     if(key==a[mid]) 
                    { 
                         cout<<"value is found at "<<mid<<" position"; 
                         break; 
                    } 
                    else if(key>a[mid]) 
                    { 
                         low=mid+1; 
                    } 
                    else if(key<a[mid]) 
                    { 
                         high=mid-1; 
                    } 
               } 
               if(key!=a[mid]) 
               { 
                    cout<<"value is not found"; 
          } 
     } 
}; 
int main() 
{
     Binary obj;      obj.read();      obj.sort();      obj.binary();      return 0; 
} 

