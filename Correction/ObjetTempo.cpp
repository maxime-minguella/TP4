/**
 *
 * \file    ObjetTempo.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe ObjetTempo
 *
 **/
#include "ObjetTempo.h"
#include "Chrono.h"
using namespace std;

nsDigicode::ObjetTempo::ObjetTempo (Chrono* lech, int d) :
     delai (d),    leChrono (lech)
 {}

void nsDigicode::ObjetTempo::finTempo (void) { attente = false; }

int nsDigicode::ObjetTempo::getDelai (void) const { return delai; }

nsDigicode::Chrono* nsDigicode::ObjetTempo::getChrono (void) { return leChrono; }

