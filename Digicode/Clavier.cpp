#include "Clavier.h"
#include "kbhit.h"

Clavier::Clavier()
{

}

int Clavier::saisirChiffre()
{
    int result = _kbhit();
    if (result == 0 || result < '0' || result > '9')
        return -1;
    else return result;
}
