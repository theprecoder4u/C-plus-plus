#include<iostream>
using namespace std;

int main(){
    int bags;
     
cout<<"Enter the number of tea bags you have: "<<endl;
cin>>bags;

if(bags<10){
    bags+=5;
cout<<bags;
}
else
cout<<"Your are assigned "<<bags<<" bags";
return 0;
}