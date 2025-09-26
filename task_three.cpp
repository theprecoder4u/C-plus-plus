#include<iostream>
using namespace std;
int main(){
    string tea[3] = {"Green Tea", "Lemon Tea", "Black Tea" };
    for(int i=0; i<3; i++){
        if(tea[i]== "Green Tea"){
            cout<<"Skipping the "<<tea[i]<<endl;
            continue;
        }
        cout<<"Brewing "<<tea[i]<<"..."<<endl;
        
    }
return 0;
}