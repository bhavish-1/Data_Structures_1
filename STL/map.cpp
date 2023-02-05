#include<iostream>
#include<map>
using namespace std;
int main(){

map<int,string> m;
m[1]="bhavish";
m[2]="pothuraju";
m[13]="great";

for(int i=0; i<m.size();i++){
    cout<<m[i].first()<<endl;
}



}