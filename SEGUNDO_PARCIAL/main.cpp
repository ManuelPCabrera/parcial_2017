#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include "CTransporte.h"
#include "CMaritimo.h"
#include "CTerrestre.h"
#include "persona.h"


using namespace std;

template <class K, class V> void vPrintMap(map<K, V> &mapa, ostream& co)
{

typename map<K, V>::iterator ForIter;

    ForIter = mapa.begin();                       // puntero al primer elemento
    co << endl;
    while (ForIter != mapa.end() )                // mientras no sea el último elemento
    {
        co << ForIter->first << "\n" << *ForIter->second << endl;
        //co << ForIter->second;
        ForIter++;                              // aumento el iterador
    }

}

template <class K, class V> void vPrintMap(map<K, V> &mapa, string nombre)
{
    typename map<K, V>::iterator ForIter;
    ofstream archivotxt;


    archivotxt.open(nombre);
    ForIter = mapa.begin();                       // puntero al primer elemento
    archivotxt << endl;
    while (ForIter != mapa.end() )                // mientras no sea el último elemento
    {
        archivotxt << ForIter->first << "\n" << *ForIter->second << endl;
        //co << ForIter->second;
        ForIter++;                              // aumento el iterador
    }

    archivotxt.close();
}


int main()
{
    map<string, CTransporte *> mapMoviles;
    map<int, persona *> mapPersonas;

    CMaritimo *CMBarco = new CMaritimo();
    CMaritimo *CMVelero = new CMaritimo("CZX023", "Esperanza", 0x7000FF, 5);
    CTerrestre *CTAuto = new CTerrestre();


    mapMoviles.insert(pair<string, CTransporte*>(CMVelero->GetMatricula(), CMVelero));
    /// declarando las clases derivadas se pueden usar los getters y setters


    CMBarco->SetPasajeros(500);
    CMBarco->SetMatricula("AUB734");
    CMBarco->SetNombre("Titanic");
    CMBarco->SetColor(CTAuto->GetColor().GetColor());

    CTAuto->SetMatricula("AA769DB");
    CTAuto->SetVelocidad(197.8);
    CTAuto->SetColor(0x050FF0FF);



    mapMoviles.insert(pair<string, CTransporte*>(CMBarco->GetMatricula(), CMBarco));
    mapMoviles.insert(pair<string, CTransporte*>(CTAuto->GetMatricula(), CTAuto));


    CTerrestre *CTMoto = new CTerrestre();

    CTMoto->SetMatricula("007XYZ");
    CTMoto->SetVelocidad(87.5);
    CColor col=CTMoto->GetColor();
    //CTMoto->GetColor().SetRed(225);
    col.SetRed(10);
    CTMoto->SetColor(col);
    CTMoto->GetColor().SetGreen(0);
    CTMoto->GetColor().SetBlue(105);
    CTMoto->SetRuedas(2);
    CTMoto->SetMarca("Honda");


    mapMoviles.insert(pair<string, CTransporte*>(CTMoto->GetMatricula(), CTMoto));

    vPrintMap(mapMoviles, cout);
    vPrintMap(mapMoviles, "prueba_moviles.txt");


    persona *Roberto = new persona("Roberto", 12516857, CFecha(26, 10)),
    *Pedro = new persona(),
    *Pablo = new persona("Pablo", 92736675, CFecha(25, 10, 1980));


    mapPersonas.insert(pair<int, persona*>(Roberto->GetDocument(), Roberto));
    mapPersonas.insert(pair<int, persona*>(Pedro->GetDocument(), Pedro));
    mapPersonas.insert(pair<int, persona*>(Pablo->GetDocument(), Pablo));


    vPrintMap(mapPersonas, cout);
    vPrintMap(mapPersonas, "prueba_personas.txt");

    return 0;
}
