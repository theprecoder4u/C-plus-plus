#include<iostream>
using namespace std;
int main(){
int incprice;
int n;
cout<<"Enter the price of tea: \n";
cin>>n;
incprice=n+(n*(10/100));
int roundedprice=(int)incprice;
cout<<"The rounded price after increasing is: "<<roundedprice<<endl;
return 0;

}