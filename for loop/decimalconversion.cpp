#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int bit = n%10;
        if(bit==1){
            ans = (pow(2,i))+ans;
        }
       n = n/10;
       i++;
    }
    cout<<ans<<endl;
}