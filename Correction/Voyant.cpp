/**
 *
 * \file    Voyant.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Voyant
 *
 **/

#include <string>

using namespace std;

#include "Voyant.h"

nsDigicode::Voyant::Voyant(Color c, Etat e) {
    couleur = c;
    et = e;

}  // Voyant()

void nsDigicode::Voyant::allumer (void) {
    if (et == eteint)
        et = allume;

}  // allumer()

void nsDigicode::Voyant::eteindre (void) {
    if (et == allume)
        et = eteint;

} // eteindre()

string nsDigicode::Voyant::getStatut (void) const {
    if (et == allume) return "ON";
    return "OFF";

} // getStatut()

