#include "stl_vector.h"
#include <vector>
#include <iostream>

void operarVector() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6); //Agregamos un elemento al vector
    numeros.erase(numeros.begin() + 2); //Eliminamos el tercer elemento del vector (1 + 2)
    std::cout << "Elementos en el vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}