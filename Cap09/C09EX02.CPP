// C09EX02.CPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
  string mensaje;
  ofstream arctxt("EJEMPLO1.TXT", ios::app);

  if (not arctxt) {
    cerr << "Error al abrir el archivo." << endl;
    return 1;
  }

  cout << "Ingrese un mensaje" << endl;
  cout << "--> ";

  getline(cin, mensaje);

  arctxt << mensaje << endl;

  arctxt.close();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
