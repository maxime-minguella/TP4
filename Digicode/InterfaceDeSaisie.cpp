#include <iostream>
#include <iomanip>
#include "InterfaceDeSaisie.h"                  
#include "Chrono.h"
#include "ObjetTempo.h"

using namespace std;

void nsDigicode::InterfaceDeSaisie::statut (string s)
{
    cout << endl     << "VERT"  << setw (4)  << leVoyantVert.getStatus ()
         << setw (7) << "ROUGE" << setw (4)  << leVoyantRouge.getStatus ()
	     << setw (24) << s << flush;
} //statut

nsDigicode::InterfaceDeSaisie::InterfaceDeSaisie (nsDigicode::Chrono* c, int i, int j) : nsDigicode::ObjetTempo (c, i), nbChiffresAttendus (j),
    leVoyantVert (vert, eteint),
    leVoyantRouge (rouge, eteint)
{
    this->nbChiffresAttendus = j;
}

int nsDigicode::InterfaceDeSaisie::saisirCode (void)
{

}
