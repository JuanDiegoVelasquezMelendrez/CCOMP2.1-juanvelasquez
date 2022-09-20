// a small program to solve Problem 3 in the Euler Project 
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

int main() {

	// definir nuestras variables
	// usando un tipo más grande que int aquí
	unsigned long long factorNumber = 600851475143;
	// establecer una bandera para mi receptor de números primos
	bool isPrime = 1;
	// iniciar la búsqueda de primo aquí
	int lastPrime = 2;

		// pensé que este ciclo for tendría que ser un ciclo while
		// pero por feliz coincidencia termina cuando se ha encontrado la solución
		for (int i = lastPrime; i < factorNumber; i++) {
			
				// imprimir en pantalla para poder ver el progreso
				std::cout << factorNumber << std::endl;
				std::cout << i << std::endl;
		
				// restablecer el receptor de primo principal
				isPrime = 1;
		
				// determinar si i es un factor primo potencial
				for (int j = 2; j < i; j++) {
					if(i%j == 0)
						isPrime = 0;
				}

				// si i es primo y si i se divide exactamente en nuestro último factor
				// entonces i es el factor primo más alto
				if(isPrime && (factorNumber%i == 0))
				{
					lastPrime = i;
					factorNumber = factorNumber / i;
				}
			}
	
	// impresion de resultado
	std::cout << factorNumber;
	std::cin.get();
	return 0;
}