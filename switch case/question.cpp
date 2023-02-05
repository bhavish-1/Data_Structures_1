#include<iostream>
using namespace std;
int main(){
int n;cin>>n;
int p,x,y,z;
cin>>x;
switch(n){
case 1: if(x>100)
        p=x/100;
        cout<<p<<endl;
        z=p*100;
        y=x-z;
        cout<<y;
        break;

case 2: if(x>50)
         p=x/50;
         x=x-p;
         break;

case 3: if(x>1)
        p=x/1;
        x=x-p;
        break;
}
}