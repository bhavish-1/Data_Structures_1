#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};
    int m = 3;
    int n = 3;
    int i=0, j=0;
    vector<int> ans(m+n);
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]>nums2[j]){
            ans.push_back(nums2[j]);
            j++;
        }
        else if(nums1[i]==nums2[j]){
            ans.push_back(nums1[i]);
            ans.push_back(nums2[j]);
        }
    }
    while(i<m){
        ans.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        ans.push_back(nums2[j]);
        j++;
    }
    
  for(int k=0; k<ans.size(); k++){
      cout<<ans[k]<<" ";
  }  
    
}