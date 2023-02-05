// column wise intilization

#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    int row = 3;
    int col = 4;

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
           cin>>arr[j][i];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}