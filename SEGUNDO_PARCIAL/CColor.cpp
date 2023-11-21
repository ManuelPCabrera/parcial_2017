#include "CColor.h"
#include <iomanip>

CColor::CColor()
{

}

CColor::CColor(int _color)
{
    color = _color;
}

int CColor::GetColor()
{
    return(color);
}
void CColor::SetColor(int _color)
{
    color = _color;
}
void CColor::SetRed(unsigned char _r)
{
    r = _r;
}
void CColor::SetGreen(unsigned char _g)
{
    g = _g;
}
void CColor::SetBlue(unsigned char _b)
{
    b = _b;
}



ostream& operator << (ostream& co, CColor& cmp)
{

    co<< "Color:" << hex << setw(8) << showbase  <<cmp.color ;
    co<< "Red:"  <<dec<<(int)cmp.r <<" ";
    co<< "grenn:" << (int)cmp.g<<" ";
    co<< "blue:" <<(int)cmp.b<<" ";

    return co;
}
