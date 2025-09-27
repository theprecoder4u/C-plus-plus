#include<iostream>
using namespace std;
int main(){
    int arr[3][5] = {{1,2,3,4,5},{1,2,3,4,4},{1,1,2,3,4}};
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}