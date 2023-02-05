#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
    // this i is used for iteration of ith round
    bool a  = false;
    for(int j=0; j<6; j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        a =true;   
    }
    }
if(a==false){
    break;
}

  }
  for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
  }
}