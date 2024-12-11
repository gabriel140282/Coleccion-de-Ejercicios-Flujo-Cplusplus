#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria { //Creo un namespace para las 2 figuras geométricas

    class Circulo {
    private:
        float radio;

    public:
        //Constructor
        Circulo(float r);

        //Agrego los métodos para calcular el área y perímetro
        void calcularArea() const;
        void calcularPerimetro() const;
    };

    float calcularAreaTriangulo(float base, float altura);
    float calcularAreaCirculo(float radio);
}

#endif //GEOMETRIA_H
