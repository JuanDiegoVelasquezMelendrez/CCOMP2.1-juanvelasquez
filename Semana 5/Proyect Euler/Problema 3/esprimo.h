#include <string>

bool isPrimo(long long n) {
    long long factor =2;
    if (n == 1)
    {
        return false;
    }
    else {
        while (factor <n/2)
        {
            if (!(n%factor))
            {
                return false;
            }
            factor++;
        }
        return true;
    }
}