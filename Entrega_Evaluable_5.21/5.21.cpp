#include <iostream>
#include <cstdlib> //librerias necesarias para que la "semilla" cambie constantemente, esto hace que el valor random no sea siempre el mismo
#include <ctime>

int main() {
	std::srand(std::time(0)); // Se inicializa la semilla para que los numeros sean realmente aleatorios
	int lanzamiento;
	int caras = 0;
	int cruces = 0;
	for (int i = 1; i <= 100; i++) {
		lanzamiento = std::rand() % 2; //resultado solo puede ser 0 o 1, 0 es cara y 1 es cruz
		if (lanzamiento==0) {
			caras++;
		} else {
			cruces++;
		}
	}
	std::cout << "Caras: " << caras << std::endl;
	std::cout << "Cruces: " << cruces << std::endl;
}