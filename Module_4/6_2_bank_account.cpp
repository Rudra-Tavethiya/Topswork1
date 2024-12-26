// Class for Bank Account
//  o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. 
//    Implement encapsulation by keeping the data members private.
//  o Objective : Understand encapsulation in classes


#include <iostream>
using namespace std;

class bankaccount {
    private:
    double balance;
    public:
    bankaccount(double initialBalance = 0.0) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } 
        else {
            balance = 0.0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited : " << amount << ", New Balance : " << balance << endl;
        } 
        else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
    
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn : " << amount << ", Remaining Balance: " << balance << endl;
            } 
            else {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            }
        } 
        else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    void displayBalance() const {
        cout << "Current Balance : " << balance << endl;
    }
};

int main() {
    double initialBalance,amount=0;
    cout<<"\n what is your initial balance : ";
    cin>>initialBalance;
    bankaccount myAccount(initialBalance);

    myAccount.displayBalance();

    cout<<"\n how much money do you want to deposit : ";
    cin>>amount;
    myAccount.deposit(amount);

    cout<<"\n how much money do you want to withdraw : ";
    cin>>amount;
    myAccount.withdraw(amount);

    cout<<"\n if you want to with draw more money please anter the amount : ";
    cin>>amount;
    myAccount.withdraw(amount);
    
    myAccount.displayBalance();
}