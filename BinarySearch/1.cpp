#include<iostream>
using namespace std;

int BinarySEARCH(int arr[], int size, int key){
int start = 0;
int end = size - 1;
int mid = (start + end)/2;
while(start<=end){
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid]>key){
        end = mid-1;
    }
    else{
        start = mid+1;
    } 
    mid = (start+end)/2;  
}    
return -1;
  }

int main(){
  int arr[7]={1,2,8,23,25,33,40};
  int key = 8;
  int size = 7;
  int ans = BinarySEARCH(arr, size, key);
  cout<<endl<<ans;
}