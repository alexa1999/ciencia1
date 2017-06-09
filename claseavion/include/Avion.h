#ifndef AVION_H
#define AVION_H
#include <iostream>
#include <vector>


using namespace std;

class Avion{
    public:
        virtual void Mensaje()=0;
};
class Avion1:public Avion
{
    public:
        void Mensaje() {cout<<"Posible turbulencia"<<endl;}
};
class Avion2:public Avion
{
    public:
        void Mensaje() {cout<<"Clima favorable"<<endl;}
};


#endif // AVION_H
