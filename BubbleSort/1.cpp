#include<iostream>
using namespace std;
int main(){
  int arr[6]={2,1,32,12,11,18};
  for(int i=0; i<6; i++){
    // this i is used for iteration of ith round
    for(int j=0; j<6; j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    }
  }
  for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
  }
}