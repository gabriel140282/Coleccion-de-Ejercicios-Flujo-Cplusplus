#include <iostream>

namespace Geometria {
    float calcularAreaTriangulo(float base, float altura) {
        float area=base*altura/2.0;
        std::cout<<"El area del triangulo es: "<<area<<std::endl;
        return area;
    }
}

