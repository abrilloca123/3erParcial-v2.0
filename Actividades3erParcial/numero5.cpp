// Actividad 5_ 27 de mayo del 2024 _ 3er parcial
#include <iostream>
#include <cstring>

int main() {
    // Arreglo 1
    char arreglo[3][20]; 
    strcpy(arreglo[0], "fernando");
    strcpy(arreglo[1], "oscar");

    // Arreglo 2
    int arreglo2[4];
    arreglo2[1] = 76;
    arreglo2[2] = 56;
    arreglo2[3] = 10;

    std::cout << "Arreglo 1:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "El dato en la posici�n " << i + 1 << " es " << arreglo[i] << std::endl;
    }

    std::cout << "Arreglo 2:" << std::endl;
    for (int i = 1; i <= 3; ++i) {
        std::cout << "El dato en la posici�n " << i << " es " << arreglo2[i] << std::endl;
    }

}


