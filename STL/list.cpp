#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> l;
l.push_back(1);
l.push_front(2);
 l.erase(l.begin());
for(int i:l){
    cout<<i<<" ";
}

cout<<"size of list "<<l.size()<<endl;
}