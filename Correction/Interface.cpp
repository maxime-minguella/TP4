/**
 *
 * \file    Interface.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Interface
 *
 **/
#include <iostream>
#include <iomanip>
using namespace std;

#include "Interface.h"
#include "Chrono.h"

nsDigicode::Interface::Interface (Chrono * lech, int d, int nbca) :
    ObjetTempo (lech, d),
    nbChiffresAttendus (nbca),
    leVoyantVert (vert, eteint),
    leVoyantRouge (rouge, eteint)
{}

void nsDigicode::Interface::statut (string s) {
    cout << endl     << "VERT"  << setw(4) << leVoyantVert.getStatut()
         << setw(7)  << "ROUGE" << setw(4) << leVoyantRouge.getStatut()
         << setw(24) << s << flush;

} // statut()

int nsDigicode::Interface::saisieCode (void) {
    int code, chiffreLu = 0, nbChiffresLus;
    attente = false;
    do {
        leVoyantVert.eteindre ();
        leVoyantRouge.allumer ();
        statut ("Entrez votre code : ");
        cin.clear ();
        code = 0;
        while ((code = leClavier.saisieChiffre ()) == -1);
        nbChiffresLus = 1;
        leVoyantVert.allumer ();
        statut ("Continuez la saisie : ");
        attente = true;
        leChrono->demarrer (this);
        while (attente && nbChiffresLus < nbChiffresAttendus) {
                while (attente && (chiffreLu = leClavier.saisieChiffre())
                                   == -1);
                if (attente) {
                    code = code * 10 + chiffreLu;
                    nbChiffresLus++;
                    if (nbChiffresLus == nbChiffresAttendus)
                        leChrono->arreter ();
                }
                else
                    cout << endl << "Temps ecoulé - Fin de saisie" << endl;
        }
    }
    while (nbChiffresLus < nbChiffresAttendus );
    leVoyantRouge.eteindre ();
    statut ();
    return code;

}  //  saisieCode()

