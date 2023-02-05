#include<iostream>
using namespace std;
int firocc(int arr[], int target, int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end){
     if(arr[mid]==target){
       ans = mid;
       end = mid-1; 
     }
     else if(arr[mid]>target){
         end = mid-1;
     }
     else{
         start = mid+1;
     }
     mid = (start + end)/2;
    }
    return mid;
    }
int main(){
    int n = 6;
    int arr[n]={2,3,3,4,5,6};
    int key = 3;
    firocc(arr,key,n);
    int a1 = firocc(arr,key,n);
    cout<<a1;
    return 0;
}