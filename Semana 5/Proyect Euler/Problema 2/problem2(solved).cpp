#include <iostream>

using namespace std;


int  main() 

{
    int first_num = 1;
    int sec_num = 2;
    int new_num = 0;
    int sum_even = 2;

    while (new_num <= 4000000) {

        new_num = first_num +sec_num;
        first_num = sec_num;
        sec_num = new_num;

        if (new_num%2 == 0) {
            sum_even += new_num;
        }
    }

    cout << sum_even << endl;

    return 0;
}

