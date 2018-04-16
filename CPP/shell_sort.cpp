#include<iostream>  
using namespace std; 
#define max 100
class Shell 
{ 
        public: 
                int n,arr[max]; 
 
                void getData()                 {                         int i;                         cout<<"How many array Elements :";                         cin>>n; 
 
                        cout<<"Enter Array Elements : "<<endl;                         for(i=0;i<n;i++)                                 cin>>arr[i]; 
 
                }      void ShellSort() 
     { 
             int i, j, k, temp,f=0;              for(i = n/2.0   ;    i > 0    ;    i = i/2.0){                cout<<endl<<"(Pass : "<<f++<<" )(inc = "<<i<<"):  \t "; 
               displayData(); 
                     for(j = i; j < n; j++){ 
                         for(k = j-i; k >= 0; k = k-i){                                      if(arr[k+i] >= arr[k]) 
                                          break;                                      else {                                              temp = arr[k];                                              arr[k] = arr[k+i];                                          arr[k+i] = temp; 
                                     } 
                             } 
                     } 
             } 
     } 
 
          void displayData() 
                {                         int i;                         for(i=0;i<n;i++)                                 cout<<arr[i]<<"\t"; 
                } 
 
 
}b; 
 
int main() 
{ 
 b.getData(); 
 b.ShellSort();  cout<<endl<<"Sorted Array Elements are :"<<endl; 
 b.displayData();  cout<<endl; 
 
} 

