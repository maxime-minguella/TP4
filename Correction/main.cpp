/**
 *
 * \file    main.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  utilisation de la classe Systeme
 *
 **/

#include "Systeme.h"

#define DELAI_CLAVIER 5
#define DELAI_PORTE 8
#define NB_CHIFFRES_CLAVIER 4

int main (void) {
    nsDigicode::Systeme s (DELAI_CLAVIER, DELAI_PORTE, NB_CHIFFRES_CLAVIER);

    return 0;

} // main()

