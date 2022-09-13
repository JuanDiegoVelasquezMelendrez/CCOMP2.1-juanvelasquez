#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date date1{12,12,2012};
    Date date2{14,60,-326};

    cout << "\ndate1 is: " << date1.getMonth() << "/" << date1.getDay() << "/" << date1.getYear();
    cout << "\ndate2 is: " << date2.getMonth() << "/" << date2.getDay() << "/" << date2.getYear();

    cout << "\n\nenter a new month for date2: ";
    int newMonth;
    cin >> newMonth;
    cout << "\nproceeding...";
    date2.setMonth(newMonth);
    cout << "\nnow, the value of date2 month is: " << date2.getMonth();

    cout << "\n\nenter a new day for date2: ";
    int newDay;
    cin >> newDay;
    cout << "\nproceeding...";
    date2.setDay(newDay);
    cout << "\nnow, the value of date2 day is: " << date2.getDay();

    cout << "\n\nenter a new year for date2: ";
    int newYear;
    cin >> newYear;
    cout << "\nproceeding...";
    date2.setYear(newYear);
    cout << "\nnow, the value of date2 year is: " << date2.getYear();

    cout << "\n\nnew date2 is: " << date2.getMonth() << "/" << date2.getDay() << "/" << date2.getYear() << endl;

    return 0;
}
