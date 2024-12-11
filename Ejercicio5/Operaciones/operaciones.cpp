#include "operaciones.h"
#include "../STL_SET/stl_set.h"
#include "../STL_MAP/stl_map.h"
#include "../STL_VECTOR/stl_vector.h"
#include <iostream>

void ejecutarOperacion(int opcion) {
    switch (opcion) {
        case 1:
            operarVector();
        break;
        case 2:
            operarMap();
        break;
        case 3:
            operarSet();
        break;
        default:
            std::cout << "Opcion invalida. Por favor, selecciona una opcion entre 1 y 3." << std::endl;
    }
}

