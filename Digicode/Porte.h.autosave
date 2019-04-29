#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "Capteur.h"

namespace nsDigicode {

    class Porte : public ObjetTempo
    {
    private:
        Capteur capteur;
        bool fermer (void);
    public:
        Porte (Chrono*, int);
        bool ouvrir (void);
    };

}

#endif // PORTE_H
