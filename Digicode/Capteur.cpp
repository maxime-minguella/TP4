#include "Capteur.h"
#include "kbhit.h"

nsDigicode::Capteur::Capteur()
{

}

int nsDigicode::Capteur::detecter()
{
    return _kbhit();
}
