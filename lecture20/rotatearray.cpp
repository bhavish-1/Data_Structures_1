#include<iostream>
using namespace std;
int main(){
int k = 3;
int x = 0;
int arr[5] = {11,12,13,14,15};
int temp[5];
int m = sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<m; i++){
    x = (i + k)%m;
    temp[x]=arr[i];
}
for(int i=0; i<m; i++){
    cout<<temp[i]<<" ";
}
}