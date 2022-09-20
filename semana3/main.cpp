#include <iostream>
#include Account.h
#include <string>

using namespace std;

int main()
{
    Account account1{"Jane Green" , 50}

    Account account2{"John Blue" , -7}


    cout << "account1: " << account1.getName() << "balance is: $" << account1.getBalance();
    cout << "account2: " << account2.getName() << "balance is: $" << account2.getBalance();


    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to the account1's balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
32 cin >> depositAmount; // obtain user input
33 cout << "adding " << depositAmount << " to account2 balance";
34
35
36 // display balances
37 cout << "\n\naccount1: " << account1.getName() << " balance is $"
38 << account1.getBalance();
39 cout << "\naccount2: " << account2.getName() << " balance is $"
40 << account2.getBalance() << endl;
