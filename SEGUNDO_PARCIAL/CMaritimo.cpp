#include "CMaritimo.h"

CMaritimo::CMaritimo(string _matricula, string _nombre, int _color, int _pasajeros ):
    CTransporte(_matricula,_color)
{
    Nombre = _nombre;
    Pasajeros = _pasajeros;
}

CMaritimo::~CMaritimo()
{
    //dtor
}

void CMaritimo::SetPasajeros(int _pasajeros)
{
    Pasajeros = _pasajeros;
}

void CMaritimo::SetMatricula(string _matricula)
{
    Matricula = _matricula;
}

void CMaritimo::SetNombre(string _nombre)
{
    Nombre = _nombre;
}

void CMaritimo::imprimir(ostream& co)
{
    CTransporte::imprimir(co);
    co<< "Nombre:" << Nombre <<endl;
    co<< "Pasajeros :" << dec<<Pasajeros <<endl;


}

ostream& operator << (ostream& co, CMaritimo& cmp)
{
    cmp.imprimir(co);

    return co;
}
