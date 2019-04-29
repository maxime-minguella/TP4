#include "System.h"

nsDigicode::System::System(int i, int j, int k) : interface(&chrono, i, k), porte(&chrono, j)
{
    int c;
    while (true) {
           achvg.archiver (c = interface.saisirCode());
           if (bd.verifier (c)) {
               if (!porte.ouvrir ())
                   alarme.declencher ();
           }
        }
}
