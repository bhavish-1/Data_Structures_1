#include<iostream>
#include<stdlib.h>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minindex = i;

        for(int j=i+1; j<n; j++){
            if(arr[minindex]>arr[j]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }

 for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
 }
}

int main(){
    int arr[6] = {3,1,5,21,18,8};
    selectionsort(arr, 6);
}