#include<iostream>
using namespace std;
class tea{
    public:
    virtual void preparetea() = 0;
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makechai(){
        preparetea();
        brew();
        serve();
    }
};

class greentea : public tea{
void preparetea() override {
cout<<"Making1"<<endl;
}
void brew() override {
cout<<"Making2"<<endl;
}
void serve() override {
cout<<"Making3"<<endl;
}
};

class masalatea : public tea{
void preparetea() override {
cout<<"Making12"<<endl;
}
void brew() override {
cout<<"Making22"<<endl;
}
void serve() override {
cout<<"Making32"<<endl;
}
};

int main(){
    greentea chai;
    masalatea chai1;
    chai.makechai();
    chai1.makechai();
}
