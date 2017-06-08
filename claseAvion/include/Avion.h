#ifndef AVION_H
#define AVION_H


#include <iostream>
#include <vector>
#include "Torre.h"

using namespace std;


class Avion{
    public:
       vector <Torre *> aviones;
       Avion(){};

    void agregar(Avion1 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
    }
    void agregar(Avion2 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
    }

};

#endif // AVION_H
