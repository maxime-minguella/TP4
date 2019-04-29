/**
 *
 * \file    Alarme.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Alarme
 *
 **/
#include <iostream>
#include <unistd.h>   // sleep()
using namespace std;
#include "Alarme.h"

void nsDigicode::Alarme::declencher (void) {
    while (true) {
        cout << "Alarme : la porte n'est pas fermée" << endl;
        sleep(1);
    }
} // declencher()

