#ifndef MAGOBLANCO_H
#define MAGOBLANCO_H
#include "Personaje.h"

class MagoBlanco:public Personaje
{
    public:
        MagoBlanco(int hp, int puntos_de_ataque);
        virtual ~MagoBlanco();
        void activarPoder();
        void imprimir();
    protected:
    private:
};

#endif // MAGOBLANCO_H
