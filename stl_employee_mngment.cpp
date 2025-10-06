#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayemployee(const Employee& emp){
    cout<< "ID: "<<emp.id<<" , Name: "<<emp.name<<" , Salary: $"<<emp.salary<<endl;
};

int main(){
    vector<Employee> employees = {
        {101, "Preetam", 100000},
        {102, "Mayank", 40000},
        {103, "Priya", 130000},
        {104, "Preeti", 20000},
        {105, "Hitesh", 10000}
    };

    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    cout<<"Employees are sorted from highest to lowest salary\n";
    
    for_each(employees.begin(), employees.end(), displayemployee);
    vector<Employee> highearners;

    copy_if(employees.begin(), employees.end(), back_inserter(highearners), [](const Employee& e){
        return e.salary > 50000;
    });

    cout<<"Employees who are high earners\n";
    
    for_each(highearners.begin(), highearners.end(), displayemployee);

    double totalsalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    double averagesalary = totalsalary / employees.size();

    auto highestpaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });
    return 0;
}

