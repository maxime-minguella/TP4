#include "Alarme.h"

Alarme::Alarme()
{

}

void Alarme::declencher()
{
    while (true) {
        std::cout << "Alarme : la porte n'a pas été refermée" << std::endl;
        sleep(1);
    }
}
