#ifndef SYSTEM_H
#define SYSTEM_H

#include "Alarme.h"
#include "Archivage.h"
#include "BD.h"
#include "Chrono.h"
#include "InterfaceDeSaisie.h"
#include "Porte.h"

namespace nsDigicode {

    class System
    {
    private:
        InterfaceDeSaisie interface;
        Chrono chrono;
        Alarme alarme;
        Porte porte;
        BD bd;
        Archivage achvg;
    public:
        System(int, int, int);
    };

}

#endif // SYSTEM_H
