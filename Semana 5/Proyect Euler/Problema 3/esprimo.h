bool isPrimo(long long n) {
    long long factor =2;
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