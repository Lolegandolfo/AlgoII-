#include <iostream>
#include <list>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    Fecha(int mes, int dia);
    int mes();
    int dia();
    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif
    void incrementar_dia();

  private:
    int _mes;
    int _dia;
};


#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    return this->dia()== o.dia() && this->mes()== o.mes();
}
#endif

Fecha :: Fecha(int mes, int dia) : _mes(mes), _dia(dia){
}

int Fecha :: dia(){
    return _dia;
}

int Fecha :: mes(){
    return _mes;
}

ostream& operator<<(ostream& os, Fecha f){
    os << f.dia() << "/" << f.mes();
    return os;
}

void Fecha ::incrementar_dia() {
    if (_mes == 12 && _dia == 31){
        _mes = 1;
        _dia = 1;
    }else if (dias_en_mes(_mes) == _dia){
        _mes = _mes + 1;
        _dia = 1;
    }else{
        _dia = _dia + 1;
    }
}

// Ejercicio 11, 12


// Clase Horario

class Horario{
public:
    Horario(uint hora, uint min);
    uint hora();
    uint min();
    bool operator == (Horario o);
private:
    uint _hora;
    uint _min;
};

Horario :: Horario(uint hora, uint min): _hora(hora), _min(min) {

}
uint Horario :: hora(){
    return _hora;
}
uint Horario :: min(){
    return _min;
}
ostream& operator << (ostream os, Horario h){
    os << h.hora()<<":"<<h.min();
}

bool Horario::operator==(Horario o) {
    return this->hora()== o.hora() && this->min()== o.min();
}
// Ejercicio 13

// Clase Recordatorio


// Ejercicio 14

// Clase Agenda

