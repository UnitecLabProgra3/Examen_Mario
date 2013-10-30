#include <iostream>
#include <vector>
using namespace std;

#include "Personaje.h"
#include "Guerrero.h"
#include "MagoBlanco.h"
#include "MagoOscuro.h"

int main()
{
    vector<Personaje*>personajes;


    personajes.push_back(new MagoBlanco(70,10));
    personajes.push_back(new MagoOscuro(200,3));
    personajes.push_back(new Guerrero(100,59));

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }
    cout<<"---------Activar Poder---------"<<endl;

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->activarPoder();
    }

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }

    cout<<"---------Recibir ataque---------"<<endl;

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->recibirAtaque(10);
    }

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }



    return 0;
}


