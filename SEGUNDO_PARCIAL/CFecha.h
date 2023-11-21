#ifndef CFECHA_H
#define CFECHA_H
#include <ostream>
#include <iostream>      // para el cout
#include <fstream>       // para archivos

using namespace std;

class CFecha
{
    private:
        unsigned int Day;
        unsigned int Month;
        unsigned int Year;

    public:
        CFecha();
        CFecha(unsigned int = 1, unsigned int = 1, unsigned int = 1000);

        unsigned int GetDay() const;
        bool SetDay(unsigned int);

        unsigned int GetMonth() const;
        bool SetMonth(unsigned int);

        unsigned int GetYear() const;
        bool SetYear(unsigned int);

        bool operator< (const CFecha) const;
        friend ostream& operator << (ostream&, CFecha&);

};

#endif // CFECHA_H
