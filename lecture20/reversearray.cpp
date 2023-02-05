#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,3,4,5,6,7,9};
    int n= 7;
    int i=0;
    int e=n-1;
    while(i<=e){
    swap(arr[i],arr[e]); 
    i++;
    e--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}