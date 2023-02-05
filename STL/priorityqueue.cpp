#include<iostream>
#include<queue>
using namespace std;
int main(){
 // max heap
 priority_queue<int> maxi ;
maxi.push(4);
maxi.push(1);
maxi.push(13);
maxi.push(2);
maxi.push(1);
int n = maxi.size();
for(int i=0; i<n; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;
// min heap
priority_queue<int,vector<int>, greater<int> >mini;
mini.push(4);
mini.push(1);
mini.push(13);
mini.push(2);
mini.push(1);
int m = mini.size();
for(int i=0; i<m; i++){
    cout<<mini.top()<<" ";
    mini.pop();
}
}