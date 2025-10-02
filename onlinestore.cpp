#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>

using namespace std;

struct Product{
    int productid;
    string name;
    string category;
};

struct Order{
    int orderid;
    int productid;
    int quantity;
    string customerid;
    time_t orderdate;
};

int main(){
    vector<Product> products ={
        {101,"Laptop", "Electronics"},
        {102,"SmartPhone", "Electronics"},
        {103,"Tea Maker", "Kitchen"},
        {103,"Blender", "Kitchen"},
        {103,"Lamp", "Household"},
    };

    deque<string> recentcustomer = {"C001", "C002", "C003"};

    recentcustomer.push_back ("C004");
    recentcustomer.push_front("C005");
    list<Order> orderhistory;

    orderhistory.push_back({1, 101, 1, "C001", time(0)});
    orderhistory.push_back({2, 102, 2, "C002", time(0)});
    orderhistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;

    for(const auto &Product: products){
        categories.insert
    }







    return 0;
}