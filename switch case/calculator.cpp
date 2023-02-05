#include<iostream>
using namespace std;
int main(){

int n; 
cout<<"what operation you want to perform"<<endl;
cout<<"1.addtion"<<endl;
cout<<"2.substraction"<<endl;
cout<<"3.multiplication"<<endl;
cout<<"4.division"<<endl;
cin>>n;
int a,b,c;
cout<<"enter the two numbers"<<endl;
cin>>a>>b;

switch(n){
    case 1: c=a+b; cout<<c<<endl; break;
    case 2: c=a-b; cout<<c<<endl; break;
    case 3: c=a*b; cout<<c<<endl; break;
    case 4: c=a/b; cout<<c<<endl; break;
default : cout<<"the operation not present"<<endl;
}

}