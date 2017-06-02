#include <iostream>
#include "Birthay.h"
#include "Persona.h"
#include "Gerente.h"
#include "Conserje.h"

using namespace std;


int main()
{
    Persona *vectorpersonas[2];

    vectorpersonas[0]= new Gerente("carlos",Birthay(2,5,1999),54787,"Peru");
    vectorpersonas[1]= new Conserje("luis",Birthay(2,5,1982),778787,"ARGENTINA");

    vectorpersonas[0]->mostrar();
    cout<<endl;
    vectorpersonas[1]->mostrar();
    
    return 0;
}
