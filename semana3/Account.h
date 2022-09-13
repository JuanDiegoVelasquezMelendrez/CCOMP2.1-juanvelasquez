#include <string>

class Account {

public:

    Account(std::string AccountName, int intialBalance)
        :name{AccountName} {

            if (intialBalance>0) {
                balance = intialBalance;
        }
    }

    //depositar:
    void deposit(int depositAmount) {

        if (depositAmount>0){
            balance = balance + depositAmount;

        }
    }

    //retirar:
    void withdraw(int withAmount) {

        if (withAmount<balance) {

            balance = balance - withAmount;
        }

            else {
                std::string cout << "Withdrawal amount exceeded account balance." <<endl;
            }
    }

    //obtener el balance:
    int getBalance() const {

        return balance;
    }

    //cambiar el nombre:
    void setName(std::string accountName) {

        name = accountName;
    }

    //obtener el nombre:
    std::string getName() const {

        return name;
    }
private:

    std::string name;

    int balance{0};

};