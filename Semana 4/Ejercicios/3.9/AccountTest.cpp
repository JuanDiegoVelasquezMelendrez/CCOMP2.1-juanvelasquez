#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout <<"\nEnter deposit amount fo account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding "<< depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout <<"\n\nEnter deposit amount fo account2: ";
    cin >> depositAmount;
    cout << "adding "<< depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter withdrawal amount for account1: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    if (account1.withdrawVerification(withdrawalAmount) == true) {
        cout << "withdrawing " << withdrawalAmount << " to account1 balance";
        account1.withdraw(withdrawalAmount);
    }
    else {
        cout << "Withdrawal amount exceeded account balance";
    }

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter withdrawal amount for account2: ";
    cin >> withdrawalAmount;
    if (account2.withdrawVerification(withdrawalAmount) == true) {
        cout << "withdrawing " << withdrawalAmount << " to account2 balance";
        account2.withdraw(withdrawalAmount);
    }
    else {
        cout << "Withdrawal amount exceeded account balance";
    }

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    return 0;
}