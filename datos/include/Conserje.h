#ifndef CONSERJE_H
#define CONSERJE_H
#include <iostream>
#include "Birthay.h"
#include "Persona.h"
#include "Gerente.h"
#include <string>
using namespace std;

class Conserje:public Persona{
    int sotano=7;
public:
    Conserje(string n,Birthay b,int d,string p):Persona(n,b,d,p){}
    void mostrar(){cout<<" nombre:  "<<name<<" numero de sotano:  "<<sotano<<"  edad: "<<cumple.edad()<<"  dni:  "<<dni<<"  pais :"<<pais;}
};
#endif // CONSERJE_H
