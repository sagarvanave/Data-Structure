#include <iostream> 
using namespace std; 
int main() 
{ 
    int i,j,size,a[100],key;     cout<<"\n Enter size of array ";     cin>>size;     cout << "\n Enter array element " << endl;     for(i=0;i<size;i++)     cin>>a[i];     cout<<"\n Enter key value you want to search ";     cin>>key;     for(i=0;i<size;i++)         if(a[i]==key)     {         cout<<"\n key element found at position "<<i;         break;     }     if(a[i]!=key)     {         cout<<"\n element not found"; 
    }     return 0; 
} 

