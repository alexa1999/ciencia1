#ifndef TORRE_H
#define TORRE_H

#include <iostream>
#include <vector>


using namespace std;

class Torre{
    public:
        virtual void Mensaje()=0;
};
class Avion1:public Torre
{
    public:
        void Mensaje() {cout<<"Posible turbulencia"<<endl;}
};
class Avion2:public Torre
{
    public:
        void Mensaje() {cout<<"Clima favorable"<<endl;}
};


#endif // TORRE_H
