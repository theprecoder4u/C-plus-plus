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

class box{
int len = 500;
friend void show(box);
};

void show(box a){
cout<<a.len<<endl;
}

int main(){
   x chai;
   y chai1;
   box chai3;
   show(chai3);
   chai1.show(chai);
    return 0;
}
