// C07EX11.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  size_t i, j;
  uint32_t filas, columnas;
  uint32_t **pmatriz;

  cout << "Ingrese la cantidad de filas ...: ";
  cin >> filas;
  cin.ignore(80, '\n');

  cout << "Ingrese la cantidad de columnas ..: ";
  cin >> columnas;
  cin.ignore(80, '\n');

  pmatriz = new uint32_t*[filas];

  for (i = 0; i <= filas - 1; i++)
    pmatriz[i] = new uint32_t[columnas];
  cout << endl;

  for (i = 0; i <= filas - 1; i++) {
    for (j = 0; j <= columnas - 1; j++) {
      cout << "Ingrese valor para matriz[";
      cout << i + 1 << "," << j + 1 << "] = ";
      cin >> pmatriz[i][j];
      cin.ignore(80, '\n');
    }
  }

  cout << endl;
  cout << "Los valores ingresados son:\n" << endl;
  for (i = 0; i <= filas - 1; i++) {
    for (j = 0; j <= columnas - 1; j++) {
      cout << "MATRIZ[" << i + 1 << "," << j + 1;
      cout << "] = ";
      cout << setw(4) << pmatriz[i][j] << endl;
    }
  }

  for (i = 0; i <= filas - 1; i++)
    delete [] pmatriz[i];
  delete [] pmatriz;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
