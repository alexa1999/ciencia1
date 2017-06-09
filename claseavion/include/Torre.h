#ifndef TORRE_H
#define TORRE_H


#include <iostream>
#include <vector>
#include "Avion.h"

using namespace std;


class Torre{
    public:
       vector <Avion *> aviones;
       Torre(){};

    void agregar(Avion1 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
    }
    void agregar(Avion2 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
    }

};

#endif // TORRE_H
