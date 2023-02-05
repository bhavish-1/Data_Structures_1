#include<iostream>
#include<vector>
using namespace std;

int main(){
int n; cin>>n;
vector<int> arr(n);
vector<int> ans;

for(int i=0; i<n; i++){
        cin>>arr[i];
}

(arr.begin(), arr.end());
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
           ans.push_back(arr[i]);
        }
    }
}
for(int i=0; i<ans.size(); i++){
    cout<<ans[i];
}
}