#ifndef _INTERFACE
#define _INTERFACE

#include <string>
#include "ObjetTempo.h"
#include "Clavier.h"
#include "Voyant.h"

namespace nsDigicode {

    class InterfaceDeSaisie : public ObjetTempo
	{
    private:
        int nbChiffresAttendus;
        Clavier leClavier;
        Voyant  leVoyantVert;
        Voyant  leVoyantRouge;
		void statut(std::string="\n");
    public:
        InterfaceDeSaisie (Chrono*, int, int);
        int saisirCode (void);
	}; // InterfaceDeSaisie
	
} /* ns_Digicode */

#endif /* _INTERFACE */
