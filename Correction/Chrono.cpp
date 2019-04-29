/**
 *
 * \file    Chrono.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Chrono
 *
 **/
#include <ctime>
#include <thread>
#include <iostream>

using namespace std;

#include "ObjetTempo.h"
#include "Chrono.h"

void nsDigicode::Chrono::arreter (void) { actif = false; }

nsDigicode::Chrono::Chrono (void) { actif = false; }

void* nsDigicode::Chrono::compter (void * p) {
    double duree   = (clock_t) ( (ObjetTempo *) p)->getDelai ();
    Chrono *lec    = ( (ObjetTempo *) p)->getChrono ();
    clock_t debut  = clock ();
    double tempsEcoule = (clock () - debut) / CLOCKS_PER_SEC;
    lec->actif = true;
    while (lec->actif && tempsEcoule < duree) {
         tempsEcoule = (clock () - debut) / CLOCKS_PER_SEC;
    }
    if (tempsEcoule >= duree ) {
         ( (ObjetTempo *) p)->finTempo ();
        lec->actif = false;
    }
    pthread_exit (NULL);

} //compter()

void nsDigicode::Chrono::demarrer (ObjetTempo * a) {
    pthread_t thread;
    while (actif)
        std::cout.flush ();
//	double duree = a->getDelai ();
    std::cout.flush ();
    pthread_create (&thread, NULL, compter, (void *) a);

} //demarrer()

