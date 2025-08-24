#include <iostream>

using namespace std;

class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum,string accName)
    {
        accountNumber=accNum;
        accountHolderName=accName;
        balance=0.0;
    }
    void deposit(double money)
    {
        balance+=money;
    }
    void withdraw(double money)
    {
        balance-=money;
    }
    double checkBalance()
    {
        cout<<balance<<endl;
        return balance;
    }
    double calculateInterest(double rate)
    {
        return balance*(rate/100);
    }
};

int main()
{
    return 0;
}
