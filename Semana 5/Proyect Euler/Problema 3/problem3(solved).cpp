#include <iostream>

int main() {

	unsigned long long numero = 600851475143;

	bool esprimo = 1;
	int ult_primo = 2;

		for (int i = ult_primo; i < numero; i++) {
			
				std::cout << numero << std::endl;

				esprimo = 1;		
				for (int j = 2; j < i; j++) {
					if(i%j == 0)
						esprimo = 0;
				}

				if(esprimo && (numero%i == 0))
				{
					ult_primo = i;
					numero = numero / i;
				}
			}
	
	
	return 0;
}