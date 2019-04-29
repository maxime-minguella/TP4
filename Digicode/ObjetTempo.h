#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    private:
        int delai;
    protected:
        int attente;
        Chrono* chrono;
    public:
        ObjetTempo (Chrono*, int);
        Chrono* getChrono() { return this->chrono; }
        inline void finTempo() { this->attente = 0; }
        int getDelai() { return this->delai; }
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
