// C09EX08.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  fstream arcbin("EJEMPLO4.BIN", ios::in | ios::binary);

  if (arcbin.fail()) {
    cout << "El archivo no existe, creando..." << endl;
    arcbin.clear(); 
    arcbin.open("EJEMPLO4.BIN", ios::out | ios::binary);

    if (arcbin.fail()) 
      cerr << "Error al crear el archivo." << endl;
    else
      cout << "Archivo creado con exito!" << endl;
  }
  else
    cout << "El archivo ya existe." << endl;

  arcbin.close();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
