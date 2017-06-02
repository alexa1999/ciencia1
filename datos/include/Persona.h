#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
#include "Birthay.h"


using namespace std;
class Persona{
public:
    string name;
    Birthay cumple;
    int dni;
    string pais;

public:
    Persona();
    Persona(string n, Birthay c,int d ,string p): name(n),cumple(c),dni(d),pais (p){}
    ~Persona(){}
    virtual void mostrar(){};

};



#endif // PERSONA_H
