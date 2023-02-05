#include<iostream>
#include<stack>
using namespace std;
int main(){
    ///////// stack -> last in first out (LIFO)

    stack<string> s;
    s.push("Bhavish");
    s.push(" Pothuraju");
    s.push("great");
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    
    //cout<<s.pop();

    cout<<s.top()<<endl;

}