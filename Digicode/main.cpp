#include "System.h"

using namespace std;
using namespace nsDigicode;

#define DELAI_CLAVIER 5
#define DELAI_PORTE 8
#define NB_CHIFFRES_CLAVIER 4

int main (void) {
    nsDigicode::System s (DELAI_CLAVIER, DELAI_PORTE, NB_CHIFFRES_CLAVIER);

    return 0;

} // main()
