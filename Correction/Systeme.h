/**
 *
 * \file    Systeme.h
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  déclaration de la classe Systeme
 *
 **/
#ifndef _SYSTEME
#define _SYSTEME

#include "Interface.h"
#include "Porte.h"
#include "Alarme.h"
#include "BD.h"
#include "Archivage.h"
#include "Chrono.h"

namespace nsDigicode {

    class Systeme {
        Interface lInterface;
        Porte     laPorte;
        Alarme    lAlarme;
        BD        laBD;
        Archivage lArchive;
        Chrono    leChrono;
      public:
        Systeme (int, int, int);

    }; // Systeme

} /* ns_Digicode */

#endif /* _SYSTEME */

