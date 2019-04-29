/**
 *
 * \file    Systeme.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Systeme
 *
 **/


#include "Systeme.h"

nsDigicode::Systeme::Systeme (int dc, int dp, int nbca) :
        lInterface (&leChrono, dc, nbca), laPorte (&leChrono, dp) {
    int c;
    while (true) {
       lArchive.archiver (c = lInterface.saisieCode());
       if (laBD.verifier (c)) {
           if (!laPorte.ouvrir ())
               lAlarme.declencher ();
       }
    }
} // Systeme()

