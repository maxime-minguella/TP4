/**
 *
 * \file    Porte.h
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  déclaration de la classe Porte
 *
 **/

#ifndef _PORTE
#define _PORTE

#include "ObjetTempo.h"
#include "Capteur.h"
#include "Chrono.h"

namespace nsDigicode {

    class Porte : public ObjetTempo {
        Capteur leCapteur;
        bool fermer();
      public:
        bool ouvrir();
        Porte(Chrono*, int);

    }; // Porte

} /* ns_Digicode */

#endif /* _PORTE */

