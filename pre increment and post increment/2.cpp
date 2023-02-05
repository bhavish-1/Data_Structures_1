#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b= 2;
    if(a-- >0 && ++b>2)
    {cout<<"great"<<endl;}
    else cout<<"not great";
    cout<< a << " "<<b<<endl; 
}

/* Note : the values are always incremented and cahnged after gets inside the if condition*/