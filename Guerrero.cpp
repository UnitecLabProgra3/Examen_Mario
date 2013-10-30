#include "Guerrero.h"



Guerrero::Guerrero(int hp, int puntos_de_ataque){
this->hp=hp;
this->tipo="Guerrero";
this->puntos_de_ataque=puntos_de_ataque;
}

void Guerrero::imprimir(){
    cout<<"Tipo: "<<tipo<<endl;
cout<<"Vida: "<<hp<<endl;
cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;

}

void Guerrero::activarPoder(){
this->hp=hp/2;
this->puntos_de_ataque*=2;
}


Guerrero::~Guerrero()
{
    //dtor
}
