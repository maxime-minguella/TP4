/**
 *
 * \file    Clavier.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Clavier
 *
 **/
#include <iostream>

#include "Clavier.h"
#include "kbhit.h"
using namespace std;

int nsDigicode::Clavier::saisieChiffre (void) {
    int c ;
    if ((c = _kbhit())) {
        cout << "*" << flush;
        return c - '0';
    }
    return -1;

} // saisieChiffre()

