#include<iostream>
using namespace std;

bool isEven(int n){
    //odd
    if(n&1)
    {
        return 0;
    }
    return 1;
}


int main(){
    int n; bool ans; cin>>n;
    ans=isEven(n);

    if(ans==0) cout<<"is odd"<<endl;
    else if(ans==1) cout<<"even"<<endl;
}