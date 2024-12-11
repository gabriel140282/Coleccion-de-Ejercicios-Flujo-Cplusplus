#ifndef CIENCIA_H
#define CIENCIA_H

//Creo un namespace para las dos asignaturas científicas (matemáticas y física)
namespace Ciencia {
    namespace Fisica {
        //Agrego la variable constante de la velocidad de la luz
        extern const float VELOCIDAD_DE_LA_LUZ;

        float calcularEnergia(float masa);
    }

    namespace Matematicas {
        bool resolverEcuacionCuadratica(float a, float b, float c, float &x1, float &x2);
    }
}

//Creo un nuevo namespace para el ejecutar del programa
namespace Programa {
    void ejecutar(float masa, float a, float b, float c);
}

#endif // CIENCIA_H
