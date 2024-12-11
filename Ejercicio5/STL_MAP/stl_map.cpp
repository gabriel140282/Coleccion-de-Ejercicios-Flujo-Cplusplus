#include "stl_map.h"
#include <map>
#include <string>
#include <iostream>

void operarMap() {
    std::map<std::string, int> edades;
    edades["Alice"] = 30; //Creo un elemento del mapa y le agrego un valor
    edades["Bob"] = 25;
    edades["Charlie"] = 35;
    edades.erase("Bob"); //Elimino un elemento del mapa
    std::cout << "Edades en el map: " << std::endl;
    for (const auto &par : edades) { //Uso referencias para obtener el valor de par
        std::cout << par.first << ": " << par.second << " anios" << std::endl;
    }
}
