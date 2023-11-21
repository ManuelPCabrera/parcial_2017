#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "CFecha.h"

using namespace std;

class persona
{
    private:
        string nombre;
        int documento;
        CFecha nacimiento;



    public:

        persona(string = "manolo", int = 0, CFecha = CFecha(0,0,0));
        virtual ~persona();

        int GetDocument();

        virtual void imprimir(ostream&);
        friend ostream& operator << (ostream&, persona&);

};

#endif // PERSONA_H
