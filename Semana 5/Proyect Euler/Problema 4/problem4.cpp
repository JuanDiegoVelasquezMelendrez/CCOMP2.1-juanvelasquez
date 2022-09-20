#include <iostream>

using namespace std;

#include <string>
int num_inv(int num) {
    int residuo{0};
    int reverso{0};

    while (num != 0)
    {
        residuo = num%10;
        reverso = reverso*10 + residuo;
        num = num/10;
    }
    return reverso;

}

bool esPalindromo(int num) {

    if (num == num_inv(num)) {
        return true;
    }
    else
    {
        return false;
    }
    
}
    


int main() {

    int producto{0};
    int palindromo_M{0};

    for (int x =100; x <=999; x++)
    {
        for (int y =100;y <= 999; y++)
        {
            producto = x*y;
            
            if (esPalindromo(producto))
            {
                if (palindromo_M < producto)
                {
                    palindromo_M = producto;
                }
            
            }
            
        }
        
    }
    cout << palindromo_M << endl;
    

    return 0;
}