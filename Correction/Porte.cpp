/**
 *
 * \file    Porte.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Porte
 *
 **/
#include <iostream>

#include "Porte.h"
using namespace std;

nsDigicode::Porte::Porte (Chrono * lech, int d) : ObjetTempo(lech, d) {}

bool nsDigicode::Porte::ouvrir (void) {
    attente = true;
    leChrono->demarrer(this);
    cout << "Vous pouvez entrer" << endl;
    while (attente && !leCapteur.detecter());
    if (attente)
        return fermer ();
    else {
        cout << "Temps écoulé - La porte se verrouille" << endl;
        return true;
    }
} // ouvrir()

bool nsDigicode::Porte::fermer (void)
{
    cout << "Porte ouverte : fermez la porte" << endl;
    while (attente && !leCapteur.detecter ());
    if (attente)
    {
        leChrono->arreter ();
        attente = false;
        cout << "Vous avez fermé la porte" << endl;
        return true;
    }
    else
        return false;
}  // fermer()

