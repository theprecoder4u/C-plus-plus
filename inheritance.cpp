#include<iostream>
#include<string>
using namespace std;

class tea{
    protected:
            string teaname;
            int servings;

    public:
        tea(string name, int serve): teaname(name), servings(serve) {
            cout<<"Tea constructor called for "<< teaname<< endl;
        }
        virtual ~tea(){
            cout<<"Destructor called"<<endl;
        }
    virtual void brew() const {
        cout<<"MAKING THE TEA"<<endl;
    }
    virtual void serve() const {
        cout<<"SERVING THE TEA"<<endl;
    }
        
};

class greentea: public tea{
    public:
        greentea(int serve): tea("Green Tea", serve){
            cout<<"Green tea constructor called"<<endl;
        }

        void brew()const override{
            cout<<"Brewing "<<teaname<<" with green leaves..."<<endl;
        }

        ~greentea(){
            cout<<"Green Tea destructor called..."<<endl;
        }
};

int main(){
    tea * tea1 = new greentea(2);

    tea1->brew();
    tea1->serve();
    return 0;
}