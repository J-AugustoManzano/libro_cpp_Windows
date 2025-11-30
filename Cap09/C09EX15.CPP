// C09EX15.CPP

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

struct Persona {
  string nombre;
  uint16_t edad;

  bool leerArchivo(ifstream &arcbin) {
    uint64_t tamano;
    char* contenido = reinterpret_cast<char*>(&tamano);
    arcbin.read(contenido, sizeof(tamano));
    if (arcbin.peek() == EOF)
      return false;

    vector<char> nombreVec(tamano + 1);
    arcbin.read(nombreVec.data(), tamano);
    nombreVec[tamano] = '\0';
    this->nombre = string(nombreVec.data());

    char* datos = reinterpret_cast<char*>(&edad);
    arcbin.read(datos, sizeof(edad));

    return true;
  }
};

int main(void) {
  Persona persona;
  ifstream arcbin("EJEMPLO07.BIN", ios::in | ios::binary);
  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    pausa();
    return 1;
  }

  cout << "REPORTE DE REGISTROS DE DATOS PERSONALES" << endl;
  cout << endl;

  cout << setiosflags(ios::left);
  cout << setw(41) << "Nombre";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw(9) << "Edad" << endl;
  cout << endl;

  while (persona.leerArchivo(arcbin)) {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << persona.nombre;
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    cout << setw(9) << persona.edad << endl;
  }

  arcbin.close();

  pausa();
  return 0;
}
