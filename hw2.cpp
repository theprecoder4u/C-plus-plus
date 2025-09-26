#include<iostream>
using namespace std;
int main(){
    bool isStudent;
    int cups;
    cout<<"Are you a student(1 for Yes and 0 for No)"<<endl;
    cin>>isStudent;
    cout<<"Enter the number of cups: ";
    cin>>cups;
    if(isStudent==1 || cups>15){
        cout<<"Your are eligible for tea subscription discount";
    }
    else
    cout<<"Your are not eligible for tea subscription discount";

return 0;
}