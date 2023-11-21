#ifndef CMARITIMO_H
#define CMARITIMO_H
#include "CTransporte.h"


class CMaritimo : public CTransporte
{
    public:
        CMaritimo(string _matricula = "0000" , string _nombre = "NN" , int _color = 0 , int _pasajeros = 0);
        //"CZX023", "Esperanza", 0x7000FF, 5);
            virtual ~CMaritimo();
            void SetPasajeros(int);

            void SetMatricula(string);
            void SetNombre(string);

        void imprimir(ostream& co);
        friend ostream& operator << (ostream&, CMaritimo&);

    protected:

    private:
        int Pasajeros;
        string Nombre;
};

#endif // CMARITIMO_H
