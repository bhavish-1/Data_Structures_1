#include<iostream>
using namespace std;
int main()
{
   int a=0, b=1;
   cout<<a<<" "<<b<<" ";
   int n=10;
   for(int i=0; i<n; i++){
   
   int nextnumber=a+b;
   cout<<nextnumber<<" ";

   a=b;
   b=nextnumber;

   } 
}