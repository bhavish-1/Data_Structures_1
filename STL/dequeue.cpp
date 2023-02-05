// yes it is dynamic it is random access

#include<iostream>
using namespace std;
#include<deque>
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
   cout<<endl;
    d.pop_back();
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

    cout<<"print index element "<<d.at(1)<<endl;
    
}