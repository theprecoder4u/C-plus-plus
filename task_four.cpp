#include<iostream>
using namespace std;
int main(){
    string tea[3] = {"Green Tea", "Lemon Tea", "Black Tea" };
    for(int i=0; i<3; i++){
        cout<<"Brewing the cups of "<<tea[i]<<endl;
        for(int j=1; j<=3; j++){
            cout<<"Serving "<<j<<" cup of "<<tea[i]<<endl;
        }
    }
return 0;
}