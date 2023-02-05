#include<iostream>
using namespace std;

int fact(int n){
    int product = 1;
    for(int i=1; i<=n; i++){
        product = product*i;
    }
    return product;
}

int nCr(int n, int r){
  int p = n-r;
  int den = fact(p)*fact(r);
  int num = fact(n);
  int z = num/den;
  return z;  
}


int main(){

int n,r; cin>>n>>r;

int value = nCr(n,r);
cout<<value<<endl;

}