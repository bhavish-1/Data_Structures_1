#include<iostream>
#include<vector>
using namespace std;

void inputEle(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int main(){
   //insection need to find if no intersection return -1 assumeing the elements in sorted........ this is more efficient method. TWO POINTER METHOD
   int m,n; cin>>n>>m;
   int arr1[n];
   int arr2[m];
   inputEle(arr1, n);
   inputEle(arr2, m); 
   
   vector<int> ans;
   int i=0, j=0;
   while(i<n && j<m){
    if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;j++;
    }
    else if(arr1[i]<arr[j]){
        i++;
    }
    else {
        j++;
    }
   }
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
} 
}