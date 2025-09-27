#include<iostream>
using namespace std;
int chaiserve(int chai[], int len){
    int total = 0;
    for(int i=0; i<len; i++){
        total += chai[i];
    }
    return total;
}

int main(){
    int chai[7]= {20, 30 , 40, 50, 60, 70, 80};
    int total = chaiserve(chai, 7);
    cout<<"Total chai Served in a week: "<<total;
    return 0;
}