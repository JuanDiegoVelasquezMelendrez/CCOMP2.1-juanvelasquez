#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,
    const string &last, const string &ssn, double sales, double rate) {

        firstName = first;
        lastName = last;
        socialSecurityNumber = ssn;

        setGrossSales(sales);
        setCommissionRate(rate);

    }

    void CommissionEmployee::setFirstName(const string &first) {
        firstName = first;
    }