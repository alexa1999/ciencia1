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

    void add(Avion1 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
    }
    void add(Avion2 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
    }

};

#endif // TORRE_H
