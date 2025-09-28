#include<iostream>
using namespace std;
class x{
private:
        int a = 5;

        friend class y;
};

class y{
    public:
    void show(x obj){
        cout<<"The value of a is: "<<obj.a<<endl;
    }
};

int main(){
   x chai;
   y chai1;
   chai1.show(chai);
    return 0;
}
