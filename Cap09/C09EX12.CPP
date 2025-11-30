// C09EX12.CPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

int main(void)
{
  string mensaje;
  uint64_t tamano;
  char* numeroCaracteres;
  ofstream arcbin("EJEMPLO6.BIN", ios::app | ios::binary);
  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    pausa();
    return 1;
  }
  
  cout << "Ingrese un mensaje" << endl;
  cout << "--> ";
  getline(cin, mensaje);

  tamano = mensaje.size();
  numeroCaracteres = reinterpret_cast<char*>(&tamano);

  // Escribe el tamano del mensaje (uint64_t) en el archivo
  arcbin.write(numeroCaracteres, sizeof(tamano));

  // Escribe los caracteres del mensaje en el archivo
  arcbin.write(mensaje.c_str(), tamano);

  arcbin.close();

  pausa();
  return 0;
}
