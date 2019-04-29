#ifndef VOYANT_H
#define VOYANT_H

#include <iostream>


namespace nsDigicode {

    enum Couleur { rouge , vert };
    enum Etat { allume , eteint };

    class Voyant
    {
    private:
        Couleur couleur;
        Etat etat;
    public:
        Voyant(Couleur couleur, Etat etat);
        void allumer();
        void eteindre();
        std::string getStatus() const;
    };

}

#endif // VOYANT_H
