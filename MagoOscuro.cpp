#include "MagoOscuro.h"

MagoOscuro::MagoOscuro(int hp, int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="Mago Oscuro";
    super_rayo_activado=false;
}

void MagoOscuro::imprimir(){
cout<<"Tipo: "<<tipo<<endl;
cout<<"Vida: "<<hp<<endl;
cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
cout<<"Super rayo: "<<super_rayo_activado<<endl;
}

void MagoOscuro::activarPoder(){
this->super_rayo_activado=true;
}

void MagoOscuro::atacar(Personaje*obj){
if(super_rayo_activado==true){
        this->puntos_de_ataque=puntos_de_ataque*2;
    obj->recibirAtaque(puntos_de_ataque);
}else{
obj->recibirAtaque(this->puntos_de_ataque);
}
}


MagoOscuro::~MagoOscuro()
{
    //dtor
}
