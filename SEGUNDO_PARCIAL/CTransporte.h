#ifndef CTRANSPORTE_H
#define CTRANSPORTE_H
#include "CColor.h"
#include <string>


class CTransporte
{
    public:
        CTransporte(string _matricula = "0000", int _color = 0x50ff0ff);
        virtual ~CTransporte();

        string GetMatricula();
        CColor GetColor();

        void SetColor(int);
        void SetMatricula(string);

        virtual void imprimir(ostream&);
        friend ostream& operator << (ostream&, CTransporte&);

    protected:
        CColor Color;
        string Matricula;
};

#endif // CTRANSPORTE_H
