#include<iostream>
using namespace std;
int main()
{
   int n=8;
   bool isprime=1;
   for(int i=2; i<n-1;i++){
    if(n%i==0){
        cout<<"notprime";
        //exit 1;
        isprime=0;
        break;
    }
   else cout<<"prime";
   }
   
}