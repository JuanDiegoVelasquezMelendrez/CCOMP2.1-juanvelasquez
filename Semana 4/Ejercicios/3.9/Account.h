#include <string>

class Account {
public:

    Account(std::string accountName, int initialBalance)
        : name{accountName} {

        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    bool withdrawVerification(int withdrawalAmount) {
        if (withdrawalAmount <= balance) {
            return true;
        }
        else {
            return false;
        }
    }

    void withdraw(int withdrawalAmount) {
        if (withdrawalAmount <= balance) {
            balance = balance - withdrawalAmount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }
private:
    std::string name;
    int balance{0};
};