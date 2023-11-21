#include "persona.h"

persona::persona(string _nombre, int _documento, CFecha _fecha)
:nacimiento(_fecha.GetDay(),_fecha.GetMonth(),_fecha.GetYear())
{
    nombre = _nombre;
    documento = _documento;

}

persona::~persona()
{
    //dtor
}

int persona::GetDocument()
{
    return documento;
}

void persona::imprimir(ostream& co)
{
    co<< "Nombre :" << nombre<<endl;
    co<< "Documento :" << documento<<endl;
    co<< "Fecha :" << nacimiento <<endl;
}

ostream& operator << (ostream& co, persona& cmp)
{
    cmp.imprimir(co);

    return co;
}
