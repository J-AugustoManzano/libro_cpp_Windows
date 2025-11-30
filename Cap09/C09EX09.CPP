// C09EX09.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

int main(void)
{
  int32_t valor;
  char* contenido = reinterpret_cast<char*>(&valor);
  size_t tamano = sizeof(valor);
  char resp;
  ofstream arcbin;

  arcbin.open("EJEMPLO5.BIN", ios::app | ios::binary);
  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    pausa();
    return 1;
  }

  cout << "REGISTRO SECUENCIAL DE VALORES" << endl;

  do {
    cout << endl;
    cout << "Ingrese un valor: ";
    cin >> valor;
    cin.ignore(80, '\n');
    arcbin.write(contenido, tamano);
    cout << endl;
    cout << "¿Desea continuar? " << endl;
    cout << "[S] Si \n[cualquier otra letra] No\n\n--> ";
    cin.get(resp);
    cin.ignore();
  } while (toupper(resp) == 'S');

  arcbin.close();

  pausa();  
  return 0;
}
