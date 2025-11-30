// C09EX14.CPP

#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

struct Persona {
  string nombre;
  uint16_t edad;

  void escribirArchivo(ofstream& arcbin) {
    uint64_t tamano = nombre.size();
    char* nombreCad = reinterpret_cast<char*>(&tamano);
    char* edadCad = reinterpret_cast<char*>(&edad);
    arcbin.write(nombreCad, sizeof(tamano));
    arcbin.write(nombre.c_str(), tamano);
    arcbin.write(edadCad, sizeof(uint16_t));
  }
};

int main(void)
{
  char resp;
  ofstream arcbin("EJEMPLO07.BIN", ios::app | ios::binary);
  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    pausa();
    return 1;
  }

  cout << "REGISTRO DE DATOS PERSONALES" << endl;

  do {
    cout << endl;
    cout << "Ingrese nombre ...: ";
    string nombre;
    getline(cin, nombre);
    cout << "Ingrese edad ......: ";
    uint16_t edad;
    cin >> edad;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Persona persona;
    persona.nombre = nombre;
    persona.edad = edad;

    persona.escribirArchivo(arcbin);

    cout << endl;
    cout << "Desea continuar? [S] Si ";
    cout << "[cualquier letra] No --> ";
    cin.get(resp);
    cin.ignore();
  } while (toupper(resp) == 'S');

  arcbin.close();

  pausa();
  return 0;
}
