// C07EX07.CPP

#include <iostream>
#include <iomanip>
#include <array>
#include <string> // Para uso de string

using namespace std;

int main(void) 
{
  // Definicion del arreglo usando std::array
  array<string, 10> nombre;
  size_t i;

  cout << "Lectura y presentacion de nombres" << endl;
  cout << endl;

  // Entrada de los nombres
  for (i = 0; i < nombre.size(); ++i) {
    cout << "Ingrese el " << setw(2) << i + 1;
    cout << "o nombre: ";
    getline(cin, nombre[i]);
  }
  cout << endl;

  // Presentacion de los nombres
  for (i = 0; i < nombre.size(); ++i) {
    cout << setw(2) << i + 1 << " nombre: " << nombre[i] << endl;
  }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
