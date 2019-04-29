/**
 *
 * \file    ObjetTempo.h
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  déclaration de la classe ObjetTempo
 *
 **/
#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

    class ObjetTempo {
        int delai;
      protected:
        bool    attente;
        Chrono* leChrono;
      public:
        Chrono* getChrono (void);
        void    finTempo  (void);
        ObjetTempo (Chrono*, int);
        int getDelai (void) const;

    }; // ObjetTempo

} /* ns_Digicode */

#endif /* _OBJETTEMPO */

