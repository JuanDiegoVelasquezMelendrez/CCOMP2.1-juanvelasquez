#include <iostream>

using namespace std;

int main() {

    long long num{2};
    long long div{0};
    long long sum{0};

    while (num < 2000000)
    {
        for (long long n =num;n>=1; n--)
        {
            if (num%n == 0)
            {
                div++;
            }
            
        }
        if (div == 2)
        {
            sum += num;
        }
        
        
        div = 0;
        num++;
    }

    cout << sum << endl;

    return 0;
    
}