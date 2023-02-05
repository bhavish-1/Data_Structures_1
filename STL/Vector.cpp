/* vector is dyanamic in nature */
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  vector<int> a(5,1);//it has size 5 and print 1 all
  vector<int> last(a);
  v.push_back(1);
  cout<<"capacity of the vector wright now "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity of the vector wright now "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity of the vector wright now "<<v.capacity()<<endl;
  v.push_back(1);  
  cout<<"capacity of the vector wright now "<<v.capacity()<<endl;
   v.push_back(4);  
  cout<<"capacity of the vector wright now "<<v.capacity()<<endl;
 // capacity means how many elements it can fit inside it
 // size means how many elements currently it has inside it
  cout<<v.size()<<endl;
  
  cout<<"gives the first element "<<v.front()<<endl;
  cout<<"gives the last element "<<v.back()<<endl;
////cout<<v.pop_back()<<endl;// this function will remove the last element

// when you clear the vector the size becomes zero but not capacity it remanis same
v.clear();
cout<<v.size()<<endl;



}