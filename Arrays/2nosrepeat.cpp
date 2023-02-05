/*two numbers n = 2m+1 were the length is 2m+1 and m numbers repeat twice and one number repeat only once find that number.*/

#include<iostream>
using namespace std;
int main(){
  int ans=0;
  int arr[7]={2,5,5,7,8,7,2};
  for(int i=0; i<7; i++){
    ans = ans^arr[i];
  } 
  cout<<ans; 
}
