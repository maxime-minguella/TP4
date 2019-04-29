/**
 *
 * \file    BD.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe BD
 *
 **/
#include <iostream>
#include <fstream>
using namespace std;
#include "BD.h"

#define NOM_FIC "../DigicodeIUT/Base.txt"

bool nsDigicode::BD::verifier (int code) {
int lu = -1;
    cout << "Vérification du code" << endl;
    ifstream leFichier;
    leFichier.open (NOM_FIC);

    while  (!leFichier.eof () && lu != code ) leFichier >> lu;
    leFichier.close ();
    if  (lu != code) cout << "Code erroné" << endl;
    return lu == code;

}  //verifier()

