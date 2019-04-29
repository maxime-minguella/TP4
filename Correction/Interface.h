/**
 *
 * \file    Interface.h
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  déclaration de la classe Interface
 *
 **/
#ifndef _INTERFACE
#define _INTERFACE
#include <string>

#include "ObjetTempo.h"
#include "Clavier.h"
#include "Voyant.h"
#include "Chrono.h"

namespace nsDigicode {

    class Interface : public ObjetTempo {
        int     nbChiffresAttendus;
        Clavier leClavier;
        Voyant  leVoyantVert;
        Voyant  leVoyantRouge;

        void statut (std::string = "\n");

    public:
        int saisieCode (void);
        Interface (Chrono*, int, int);

    }; // Interface

} /* ns_Digicode */

#endif /* _INTERFACE */

