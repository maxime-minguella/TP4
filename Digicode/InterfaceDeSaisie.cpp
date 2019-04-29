#include <iostream>
#include <iomanip>
#include "InterfaceDeSaisie.h"                  
#include "Chrono.h"

using namespace std;

void nsDigicode::InterfaceDeSaisie::statut (string s)
{
    cout << endl     << "VERT"  << setw (4) // << leVoyantVert.getStatut ()
         << setw (7) << "ROUGE" << setw (4) // << leVoyantRouge.getStatut ()
	     << setw (24) << s << flush;
} //statut

nsDigicode::InterfaceDeSaisie::InterfaceDeSaisie (nsDigicode::Chrono* c, int i, int j) : nsDigicode::ObjetTempo (c, i)
{
    this->nbChiffresAttendus = j;
}

int nsDigicode::InterfaceDeSaisie::saisirCode (void)
{

}
