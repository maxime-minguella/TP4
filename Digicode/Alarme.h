#ifndef ALARME_H
#define ALARME_H

#include <iostream>
#include <unistd.h>

namespace nsDigicode {

    class Alarme
    {
    public:
        Alarme();
        void declencher();
    };

}

#endif // ALARME_H
