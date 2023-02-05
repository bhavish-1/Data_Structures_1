#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,3};
    array<int,4> a = {1,2,3,4};

    int size = a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"elment at second index "<<a.at(2)<<endl;
    cout<<"first elemnt "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
}