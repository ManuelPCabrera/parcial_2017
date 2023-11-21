#ifndef CTERRESTRE_H
#define CTERRESTRE_H
#include "CTransporte.h"


class CTerrestre : public CTransporte
{
    public:
        CTerrestre(string Marca = "Renault",int Ruedas = 4);
        virtual ~CTerrestre();


        void SetVelocidad(float);
        void SetRuedas(int);
        void SetMarca(string);

        float GetVelocidad();
        int GetRuedas();
        string GetMarca();

        void imprimir(ostream&);
        friend ostream& operator << (ostream&, CTerrestre&);


    private:

        float Velocidad;
        int Ruedas;
        string Marca;

};

#endif // CTERRESTRE_H
