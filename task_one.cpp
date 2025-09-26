#include<iostream>
using namespace std;
int main(){
    int tea;
    cout<<"Enter the number of tea cups: "<<endl;
    cin>>tea;
    while(tea>0){
        tea--;
        cout<<"Serving a cup of tea \n" << tea <<" remaining"<<endl;
    }
    cout<<"All tea cups are served. "<<endl;
    return 0;
}