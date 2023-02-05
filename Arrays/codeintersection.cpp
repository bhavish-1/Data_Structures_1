/*find out the same elements in the both array.*/

#include<iostream>
#include<vector>
using namespace std;

void inputEle(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int main(){
   //insection need to find if no intersection return -1 assuming the elments in sorted..........
   int m,n; cin>>n>>m;
   int arr1[n];
   int arr2[m];
   inputEle(arr1, n);
   inputEle(arr2, m); 
   vector<int> ans;

for(int i=0; i<n; i++){
    int ele = arr1[i];
    for(int j=0; j<m; j++){
        if(ele == arr2[j]){
            ans.push_back(ele);
            arr2[j]=1105;
            break;
        }
    }
}

for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}

}