// C09EX11.CPP

#include <iostream>
#include <iomanip>
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
  uint64_t pos;
  char* contenido = reinterpret_cast<char*>(&valor);
  size_t tamano = sizeof(valor);
  char resp;
  uint64_t tamanoArchivo, tamanoRegistro, nrRegs;
  fstream arcbin;

  arcbin.open("EJEMPLO5.BIN", ios::in | ios::out 
              | ios::binary);
  if (not arcbin) {
    cerr << "Error al abrir el archivo." << endl;
    pausa();
    return 1;
  }

  arcbin.seekg(0, ios::end);

  tamanoArchivo = arcbin.tellg();
  tamanoRegistro = sizeof(valor);
  if (tamanoRegistro == 0)
    nrRegs = 0;
  else
    nrRegs = tamanoArchivo / tamanoRegistro;

  cout << "BUSQUEDA DIRECTA Y ESCRITURA DE VALORES" << endl;
  cout << endl;
  if (nrRegs == 0)
    cout << "El archivo esta vacío." << endl;
  else
    {
      cout << "El archivo contiene " << nrRegs;
      if (nrRegs == 1)
        cout << " registro." << endl;
      else
        cout << " registros." << endl;
    }

  do {
    cout << endl;
    cout << "Ingrese la posicion a buscar: ";
    cin >> pos;
    cin.ignore(80, '\n');
    cout << endl;
    if (pos >= 1 and pos <= nrRegs) {
      arcbin.seekg((pos - 1) * sizeof(valor), ios::beg);
      arcbin.read(contenido, tamano);
      cout << "Valor " << valor << " en la posicion ";
      cout << pos << endl;
      cout << endl;
      cout << "Ingrese el nuevo valor: ";
      cin >> valor;
      cin.ignore(80, '\n');
      cout << endl;
      arcbin.seekp((pos - 1) * sizeof(valor), ios::beg);
      arcbin.write(contenido, tamano);
      cout << "Valor " << valor << " en la posicion ";
      cout << pos << endl;
    }
    else
      cerr << "Posicion ingresada - invalida." << endl;
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
