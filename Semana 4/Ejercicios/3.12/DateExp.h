#include <string>

class Date {

public:

    Date (int initialMonth, int initialDay, int initialYear) {

        if (initialMonth >= 1) {
            if (initialMonth <= 12) {
                month =initialMonth;
            }
        }

        if (initialDay >= 1) {
            if  (initialDay <= 31) {
                day = initialDay;
            }
        }

        if (initialYear > 0) {
            year = initialYear;
        }
    }

    void setMonth(int newMonth) {
        if (newMonth >= 1) {
            if (newMonth <= 12) {
                month = newMonth;
            }
        }
    }

    int getMonth() const {
        return month;
    }

    void setDay(int newDay) {
        if (newDay >=1) {
            if (newDay <= 31) {
                day = newDay;
            }
        }
    }

    int getDay() const {
        return day;
    }

    void setYear(int newYear) {
        if (newYear > 0) {
            year = newYear;
        }
    }

    int getYear() const {
        return year;
    }

    int displayDate() {
       return month/day/year;
    }

private:

    int month{1};
    int day{1};
    int year{1};

};