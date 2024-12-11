// perimetro.cpp
#include "../Ejercicio2/geometria.h"
#include <iostream>
#include <cmath>

namespace Geometria {
    void Circulo::calcularPerimetro() const {
        float perimetro = 2 * M_PI * radio;
        std::cout << "Perimetro del circulo: " << perimetro << std::endl;
    }
}
