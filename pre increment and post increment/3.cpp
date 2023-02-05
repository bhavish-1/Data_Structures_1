#include<iostream>
using namespace std;

int main(){
    int a, b=11;
    a = 10;
    if(++a){
        cout<<b;
    }
    else cout<<++b;
}

/*
++a values are always choosen.so it will get inside the loops

*/