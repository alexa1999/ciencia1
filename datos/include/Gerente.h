#ifndef GERENTE_H
#define GERENTE_H
#include <iostream>
#include "Birthay.h"
#include "Persona.h"
#include <string>
using namespace std;

class Gerente:public Persona{

    int oficina=3;
public:
    Gerente(string n,Birthay b,int d,string p):Persona(n,b,d,p){}
    void mostrar(){cout<<" nombre:  "<<name<<" numero de oficina:  "<<oficina<<"  edad: "<<cumple.edad()<<"  dni:  "<<dni<<"  pais :"<<pais;}

};

#endif // GERENTE_H
