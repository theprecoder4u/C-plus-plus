#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
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
        {104,"Blender", "Kitchen"},
        {105,"Lamp", "Household"},
    };

    deque<string> recentcustomer = {"C001", "C002", "C003"};

    recentcustomer.push_back ("C004");
    recentcustomer.push_front("C005");
    list<Order> orderhistory;

    orderhistory.push_back({1, 101, 1, "C001", time(0)});
    orderhistory.push_back({2, 102, 2, "C002", time(0)});
    orderhistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productstock= {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},

        
    };

    multimap<string, Order> customerorders;
    for(const auto &order: orderhistory){
        customerorders.insert({order.customerid, order});
    }

    unordered_map<string, string> customerdata = {
        {"C001", "Alice"},
        {"C002", "Preetam"},
        {"C003", "Hitesh"},
        {"C004", "Vidya"},
        {"C005", "Harry"},
    };

    unordered_set<int> uniqueproductid;
    for(const auto &product: products){
        uniqueproductid.insert(product.productid);
    }
    
    cout << "Products List:\n";
for (const auto &product : products) {
    cout << "ID: " << product.productid 
         << ", Name: " << product.name 
         << ", Category: " << product.category << endl;
}
cout << endl;

cout << "Recent Customers (deque): ";
for (const auto &customer : recentcustomer) {
    cout << customer << " ";
}
cout << endl << endl;

cout << "Order History:\n";
for (const auto &order : orderhistory) {
    cout << "OrderID: " << order.orderid
         << ", ProductID: " << order.productid
         << ", Quantity: " << order.quantity
         << ", CustomerID: " << order.customerid
         << ", Date: " << ctime(&order.orderdate);  // formatted time
}
cout << endl;

cout << "Product Stock:\n";
for (const auto &stock : productstock) {
    cout << "ProductID: " << stock.first 
         << " -> Stock: " << stock.second << endl;
}
cout << endl;


cout << "Customer Orders:\n";
for (const auto &order : customerorders) {
    cout << "CustomerID: " << order.first
         << " -> OrderID: " << order.second.orderid
         << ", ProductID: " << order.second.productid
         << ", Quantity: " << order.second.quantity
         << endl;
}
cout << endl;


cout << "Customer Data:\n";
for (const auto &customer : customerdata) {
    cout << "CustomerID: " << customer.first
         << " -> Name: " << customer.second << endl;
}
cout << endl;


    return 0;
}