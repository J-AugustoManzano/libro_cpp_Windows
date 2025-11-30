// MEUSPC.H (soporte para C05EX21)
// Archivo de encabezado para namespace

#include <iostream>

using namespace std;

#ifndef __MEUSPC_H
#define __MEUSPC_H

namespace testespc
{
   void subTeste(void)
   {
      cout << "Prueba en meuspc." << endl;
      cout << endl;
      cout << "Presione <Enter> para finalizar... ";
      cin.get();
   }
}

#endif // __MEUSPC_H
