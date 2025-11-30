// C09EX01.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void) 
{
  ofstream arctxt("EJEMPLO1.TXT", ios::trunc);

  if (not arctxt) {
    cerr << "Error al crear el archivo." << endl;
    return 1;
  }

  cout << "Archivo creado con exito." << endl;
  
  arctxt.close();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
