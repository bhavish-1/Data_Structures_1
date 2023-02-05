#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

vector<int> v;

v.push_back(1);
v.push_back(3);
v.push_back(13);
v.push_back(14);
v.push_back(21);
v.push_back(100);

cout<<binary_search(v.begin(), v.end(),13)<<endl; // tells whether element is there or not

string a = "abcd";
reverse(a.begin(),a.end());
cout<<a<<endl;
// rotation by one unit.......
rotate(v.begin(),v.begin()+1,v.end());
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
sort(v.begin(),v.end()); //it is based on introsort -> combination of all three sorting algos i.e; quicksort, heapsort, insertionsort.
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}

}