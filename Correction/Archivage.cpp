/**
 *
 * \file    Archivage.cpp
 *
 * \authors S. Nabitz
 *
 * \date    04/04/2018
 *
 * \version V1.0
 *
 * \brief  définition de la classe Archivage
 *
 **/
#include <fstream>
#include <ctime>     // time_t, time ()

using namespace std;
#include "Archivage.h"

#define NOM_FIC "../DigicodeIUT/Archive.txt"
#define MODE std::fstream::out | std::fstream::app

void nsDigicode::Archivage::archiver (int code) {
        ofstream leFichier (NOM_FIC,MODE);
        time_t dateActuelle;
        time (&dateActuelle);
        leFichier << "Code : " << code << "  Date : "
                  << ctime (&dateActuelle) << endl;
        leFichier.close ();

} //archiver()

