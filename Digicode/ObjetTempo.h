#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    private:
        int delai;
        Chrono* chrono;
    protected:
        int attente;
    public:
        ObjetTempo (Chrono* chrono, int tps)
        {
            this->delai = tps;
            this->chrono = chrono;
        }
        Chrono* getChrono() { return this->chrono; }
        inline void finTempo() { this->attente = 0; }
        int getDelai() { return this->delai; }
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
