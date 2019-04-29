#include <iostream>
#include "Porte.h"
#include "Capteur.h"

nsDigicode::Porte::Porte(Chrono* chrono, int i) : ObjetTempo (chrono, i)
{
}

bool nsDigicode::Porte::ouvrir()
{
    this->attente = 1;
    this->chrono->demarrer(this);
    std::cout << "" << std::endl;
    //while ();
    int i = capteur.detecter();
    if (i != 0)
        fermer();
    else
        std::cout << "" << std::endl;
}


bool nsDigicode::Porte::fermer()
{

}
