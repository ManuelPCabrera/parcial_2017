#include "CTransporte.h"

CTransporte::CTransporte(string _matricula , int _color)
:Color(_color)
{
    Matricula = _matricula;

}

CTransporte::~CTransporte()
{
    //dtor
}

string CTransporte::GetMatricula()
{
    return Matricula;
}

CColor CTransporte::GetColor()
{
    return Color;
}

void CTransporte::SetColor(int _color)
{
    Color.SetColor(_color);
}

void CTransporte::SetMatricula(string _matricula)
{
    Matricula = _matricula;
}

void CTransporte::imprimir(ostream& co)
{
    co<< "Matricula :" << Matricula <<endl;

}

ostream& operator << (ostream& co, CTransporte& cmp)
{
    cmp.imprimir(co);
    co << cmp.Color <<endl;
    return co;
}
