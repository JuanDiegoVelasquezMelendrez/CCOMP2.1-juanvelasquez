bool isPrimo(long long n) {
    if (n==1)
    {
        return false;
    }
     else {
        long long factor =2;
        while (factor <=n/2)
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