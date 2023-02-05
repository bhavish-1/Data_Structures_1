#include<iostream>
using namespace std;

int pow(int a, int b){
    int product=1;
    for(int i=0; i<b; i++){
        product = product*a;
    }
    return product;
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans = pow(a,b);
    cout<<ans;
}