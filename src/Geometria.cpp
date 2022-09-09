#include <iostream>

using namespace std;

using uint = unsigned int;

// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();

    private:
        int _alto;
        int _ancho;

};

Rectangulo::Rectangulo(uint alto, uint ancho) : _alto(alto), _ancho(ancho)  {

};

uint Rectangulo::alto() {
    return this -> _alto;

}

uint Rectangulo::ancho() {
    return this -> _ancho;
}
float Rectangulo ::area() {
    return _alto * _ancho;
}

// Ejercicio 2

class Elipse {
    public:
        uint r_a();
        uint r_b();
        float area();
        Elipse(uint a, uint b);

    private:
        int _r_a;
        int _r_b;
        float pi = 3.14;
};

Elipse::Elipse(uint a, uint b) : _r_a(a),_r_b(b){

};

uint Elipse :: r_a(){
    return this -> _r_a;
}

uint Elipse :: r_b(){
    return this -> _r_b;
}

float Elipse :: area(){
    return pi * _r_a * _r_b;
}




// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo _r;
};

Cuadrado::Cuadrado(uint lado): _r(lado, lado) {}

uint Cuadrado::lado() {
    return _r.ancho();

}

float Cuadrado::area() {
    return _r.area();
}

// Ejercicio 4

class Circulo {
public:
    Circulo(uint radio);

    uint radio();

    float area();
private:
    Elipse _e;
    float pi = 3.14;
};

Circulo ::Circulo(uint radio) : _e(radio,radio) {

}

uint Circulo :: radio(){
    return _e.r_a();
}

float Circulo :: area(){
    return _e.area();
}

// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.ancho() << ", " << r.alto() << ")";
    return os;

}

ostream& operator <<(ostream& os, Elipse e){
    os << "Elipse(" << e.r_a() << ", " << e.r_b() << ")";
    return os;
}



