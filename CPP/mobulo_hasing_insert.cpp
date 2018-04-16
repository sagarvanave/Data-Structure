 #include<iostream>
 #include<stdio.h> 
using namespace std; 
class A 
{ 
     public: 
 int a[100],size,i,j,k,temp,temp2;  void choice() 
{
         cout<<"Enter size of an Array "<<endl; 
     cin>>size;      a[size];      int ch;           for(i=0;i<size;i++) 
          { 
               a[i]=0; 
          }           do 
          { 
          cout<<"Enter your choice. 1.insertion 2.search 3.display 4.exit"<<endl; 
          cin>>ch; 
 
               switch(ch) 
               { 
                    case 1:                          insert();                     break; 
 
                    case 2:                          search();                     break; 
 
          case 3: 
               display();           break; 
} 
}while(ch!=4); 
} void insert() 
     { 
 
          /*cout<<"how many value you want to enter in and given array"<<endl; 
          cin>>j;*/ 
          cout<<"Enter your data one by one "<<endl; 
               cin>>temp;                temp2=temp; 
          if(temp2<size) 
          { 
               while(a[temp2]!=0) 
               { 
                    temp2++; 
                    if(temp2>size-1) 
                    { 
                         temp2=0; 
                    } 
               } 
               if(a[temp2]==0) 
               { 
               a[temp2]=temp;      
          } 
           
     }
else if(temp2>=size) 
         { 
              temp2=temp2%10; 
     cout<<temp2<<endl;           while(a[temp2]!=0) 
                    { 
                         temp2++; 
                         if(temp2>size-1) 
                         { 
                              temp2=0; 
                         } 
                    } 
                     
                    if(a[temp2]==0) 
                    { 
                         a[temp2]=temp;      
                    } 
          } 
} 
     void search() 
     { 
          cout<<"Enter value you want to search in an given array"<<endl; 
          cin>>k; 
          for(i=0;i<size;i++) 
     {
         if(a[i]==k) 
         { 
         cout<<"Value is found at "<<i<<"th Position"<<endl; 
              break; 
              } 
} 
          if(a[i]!=k) 
          { 
               cout<<"Value is not found in an given array"; 
          } 
     } 
     void display() 
     { 
          cout<<"Given array is "<<endl;           for(i=0;i<size;i++)           cout<<a[i]<<endl; 
     } 
}; 
int main() 
{ 
     A o; 
     o.choice();      return 0; 
} 

