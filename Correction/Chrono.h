/**
 *
 * \file    Chrono.h
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  déclaration de la classe Chrono
 *
 **/
#ifndef _CHRONO
#define _CHRONO

namespace nsDigicode {

    class ObjetTempo;

    class Chrono 	{
        bool actif;
        static void* compter (void *);
      public:
        void demarrer (ObjetTempo*);
        void arreter (void);
        Chrono (void);

    }; // Chrono

} /* ns_Digicode */

#endif /* _CHRONO */

