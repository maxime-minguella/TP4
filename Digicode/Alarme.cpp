#include "Alarme.h"

nsDigicode::Alarme::Alarme()
{

}

void nsDigicode::Alarme::declencher()
{
    while (true) {
        std::cout << "Alarme : la porte n'a pas été refermée" << std::endl;
        sleep(1);
    }
}
