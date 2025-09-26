#include<iostream>
using namespace std;
int main(){

string usertea;
int quantity;
cout<<"What would you like to order in tea? \n";
getline(cin, usertea); // getline mainly two input leta h cin and uss value ko kaha store krna h //
cout<<"How many cups of "<<usertea<<" would you like to have?\n";
cin>>quantity;

cout<<usertea<<"- x"<<quantity<<endl;
cout<<"Your Order is accepted. We are preparing your order. Please wait 2 minutes. Thank you!!!";
return 0;
}