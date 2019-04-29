/**
 *
 * \file    Voyant.h
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  déclaration de la classe Voyant
 *
 **/
#ifndef _VOYANT
#define _VOYANT

#include <string>

namespace nsDigicode {

    enum Color {rouge,  vert};
    enum Etat  {allume, eteint};

    class Voyant {
        Color couleur;
        Etat et;
      public:
        void allumer  (void);
        void eteindre (void);
        Voyant (Color c, Etat e);
        std::string getStatut (void) const;

    }; // Voyant

} /* ns_Digicode */

#endif /* _VOYANT */

