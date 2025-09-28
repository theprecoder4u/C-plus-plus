#include<iostream>
#include<vector>
#include<string>
using namespace std;

class chai{
public:
    string teaname;
    int servings;
    vector<string>ingredients;

    //delegating constructor
    chai(string name){
        chai(name, 1, {"Water", "Tea leaves"});
    }

    //main constructor//
    chai(string name, int serve, vector<string> ingr){
        teaname = name;
        servings = serve;
        ingredients = ingr;

        cout<<"Main Constructor Called"<<endl;
    }

    void displaychaidetails(){
        cout<<"Tea Name: "<<teaname<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingredients: ";
        for(string ingridients: ingredients){
        cout<<ingridients<<" ";
    }
    cout<<endl;
}

};

int main (){
    chai quickchai("Quick Chai");
    quickchai.displaychaidetails();
    return 0;
}