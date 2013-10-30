#include "MagoBlanco.h"

MagoBlanco::MagoBlanco(int hp, int puntos_de_ataque)
{
 this->hp=hp;
 this->puntos_de_ataque=puntos_de_ataque;
 this->tipo="Mago Blanco";
}

void MagoBlanco::activarPoder(){
this->hp=hp*2;
this->puntos_de_ataque=puntos_de_ataque/2;
}

void MagoBlanco::imprimir(){
cout<<"Tipo: "<<tipo<<endl;
cout<<"Vida: "<<hp<<endl;
cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
}


MagoBlanco::~MagoBlanco()
{
    //dtor
}
