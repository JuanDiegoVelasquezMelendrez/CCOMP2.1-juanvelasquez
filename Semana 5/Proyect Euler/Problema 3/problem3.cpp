#include <iostream>

using namespace std;

int main()

{
    unsigned int num{0};
    int mayor_primo{0};

    while (num <= 600851475143)
    {
        if (600851475143%num == 0) {
            int mult{0};
            int prime_ver{0};
            while (mult <= num)
            {
                if (num%mult == 0) {
                    prime_ver++;
                }
            }
            if (prime_ver == 2)
            {
                if (num > mayor_primo)
                {
                    mayor_primo = num;
                }
                
            }
            
        }
        num++;
    }

    cout << num << endl;

    return 0;
    
}