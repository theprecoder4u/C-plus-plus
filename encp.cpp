#include<iostream>
using namespace std;
class bankaccount {
  private:
        string accountno;
        double balance;

  public:
        bankaccount(string accnum, double inbalance){
            accountno = accnum;
            balance = inbalance;
        }

    double getbalance() const {
        return balance;
    }

    void withdraw(double amountt){
    if (amountt > 0 && amountt<=balance ){
        balance -= amountt;
        cout<<"You have withdrawn Rs "<<amountt<<". Withdrawal Successful. Your balance is: "<<balance<<endl;;
    }
    else {
        cout<<"Invalid Withdrawal Amount "<<endl;
    }
}
void deposit(double amount){
    if(amount>0){
        balance +=amount;
        cout<<"Deposited Amount: "<<amount<<". Your Updated Balance is: "<<balance<<endl;
    }
    else{
        cout<<"Invalid Deposit amount"<<endl;
    }
}

};

int main(){
    bankaccount account("49589483984", 1000);
    account.getbalance();
    account.deposit(300);
    account.withdraw(100);
    return 0;
}