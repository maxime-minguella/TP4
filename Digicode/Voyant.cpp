#include "Voyant.h"

nsDigicode::Voyant::Voyant(nsDigicode::Couleur couleur, nsDigicode::Etat etat)
{
    this->couleur = couleur;
    this->etat = etat;
}

void nsDigicode::Voyant::allumer()
{
    this->etat = allume;
}

void nsDigicode::Voyant::eteindre()
{
    this->etat = eteint;
}

std::string nsDigicode::Voyant::getStatus()
{
    switch (this->etat) {
        case allume:
            return std::string ("ON");
        case eteint:
            return std::string ("OFF");
    }
}
