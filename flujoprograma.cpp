#include <iostream>
#include <fstream>
#include "flujoprograma.h"

static std::streambuf* cout_bufferr = nullptr;
static std::ofstream archivo_salida_terminal;

void iniciarCaptura() {

    archivo_salida_terminal.open("../resultado_terminal.txt", std::ios::trunc); //Abrimos el archivo donde se guardará la salida del programa
    if(!archivo_salida_terminal) {
        std::cerr<<"No se pudo abrir archivo.txt para escritura."<<std::endl;
    }

    cout_bufferr = std::cout.rdbuf(); //Guardamos el buffer del cout

    std::cout.rdbuf(archivo_salida_terminal.rdbuf()); //Redirigimos el cout a la salida del buffer
}

void finalizarCaptura() {
    if (cout_bufferr) {
        std::cout.rdbuf(cout_bufferr); //Restauramos el buffer del cout
        cout_bufferr = nullptr;
    }
    if (archivo_salida_terminal.is_open()) {
        archivo_salida_terminal.close(); //Si el archivo está abierto, lo cerramos
    }

    std::cout<<"Los datos han sido enviados al archivo txt"<<std::endl;
}