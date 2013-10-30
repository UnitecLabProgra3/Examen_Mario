#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H
#include "Personaje.h"

class MagoOscuro: public Personaje
{
    public:
        bool super_rayo_activado;
        MagoOscuro(int hp, int puntos_de_ataque);
        void imprimir();
        void activarPoder();
        virtual ~MagoOscuro();
        void atacar(Personaje*obj);
    protected:
    private:
};

#endif // MAGOOSCURO_H
