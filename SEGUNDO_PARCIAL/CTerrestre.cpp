#include "CTerrestre.h"

CTerrestre::CTerrestre(string _marca, int _ruedas)
{
    Marca = _marca;
    Ruedas = _ruedas;
}

CTerrestre::~CTerrestre()
{
    //dtor
}

void CTerrestre::SetVelocidad(float _velocidad)
{
    Velocidad = _velocidad;
}

void CTerrestre::SetRuedas(int _ruedas)
{
    Ruedas = _ruedas;
}

void CTerrestre::SetMarca(string _marca)
{
    Marca = _marca;
}

float CTerrestre::GetVelocidad()
{
    return Velocidad;
}

int CTerrestre::GetRuedas()
{
    return Ruedas;
}

string CTerrestre::GetMarca()
{
    return Marca;
}

void CTerrestre::imprimir(ostream& co)
{
    CTransporte::imprimir(co);
    co<< "Marca :" << Marca <<endl;
    co<< "Velocidad :" << dec<<Velocidad <<endl;
    co<< "Cant Ruedas :" << dec<<Ruedas <<endl;
    //co<< "Color" << Color <<endl;
}

ostream& operator << (ostream& co, CTerrestre& cmp)
{
    cmp.imprimir(co);

    return co;
}
