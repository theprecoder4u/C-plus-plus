#include<iostream>
using namespace std;
int main(){
    string teacup;
    do{
        cout<< "Do you want more tea? (Yes/No) :"<<endl;
        cin>>teacup;
    } while(teacup !="No" || teacup != "no");

}