// C09EX13.CPP

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

int main(void)
{
  uint64_t tamano;
  char* numeroCaracteres = reinterpret_cast<char*>(&tamano);
  ifstream arcbin("EJEMPLO6.BIN", ios::binary);
  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    pausa();
    return 1;
  }

  // Leer del archivo mientras no se llegue al final
  while (arcbin.read(numeroCaracteres, sizeof(tamano))) {
    // Reservar un byte extra para el terminador nulo
    vector<char> mensaje(tamano + 1);
    // Leer el mensaje
    arcbin.read(mensaje.data(), tamano);
    mensaje[tamano] = '\0'; // Terminar la cadena con nulo
    cout << "Mensaje: " << mensaje.data() << endl;
  }

  arcbin.close();
  pausa();
  return 0;
}
