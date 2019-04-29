#include <iostream>
#include "System.h"

using namespace std;
using namespace nsDigicode;

int main(void)
{
    BD* bd = new BD();
    Archivage* avg = new Archivage();
    System sys (bd, avg);

    return 0;
}
