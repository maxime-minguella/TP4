/**
 *
 * \file    Capteur.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Capteur
 *
 **/
#include "Capteur.h"
#include "kbhit.h"


int nsDigicode::Capteur::detecter (void) { return  _kbhit(); }

