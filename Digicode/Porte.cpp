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
    std::cout << "Vous pouvez entrer" << std::endl;
    while (attente && !capteur.detecter());
    if (attente)
        return fermer ();
    else {
        std::cout << "Temps écoulé - La porte se verrouille" << std::endl;
        return true;
    }
}


bool nsDigicode::Porte::fermer()
{
    std::cout << "Porte ouverte : fermez la porte" << std::endl;
    while (attente && !capteur.detecter ());
    if (attente)
    {
        chrono->arreter ();
        attente = false;
        std::cout << "Vous avez fermé la porte" << std::endl;
        return true;
    }
    else
        return false;
}
