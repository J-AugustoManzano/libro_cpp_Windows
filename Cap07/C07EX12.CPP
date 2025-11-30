// C07EX12.CPP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  size_t i, j;
  uint32_t filas, columnas;

  cout << "Ingrese la cantidad de filas ...: ";
  cin >> filas;
  cin.ignore(80, '\n');

  cout << "Ingrese la cantidad de columnas ..: ";
  cin >> columnas;
  cin.ignore(80, '\n');

  vector<vector<uint32_t>> 
    matriz(filas, vector<uint32_t>(columnas));

  cout << endl;

  for (i = 0; i < filas; i++) {
    for (j = 0; j < columnas; j++) {
      cout << "Ingrese valor para matriz[";
      cout << i + 1 << "," << j + 1 << "] = ";
      cin >> matriz[i][j];
      cin.ignore(80, '\n');
    }
  }

  cout << endl;
  cout << "Los valores ingresados son:\n" << endl;

  // Mostrando los valores de la matriz
  for (i = 0; i < filas; i++) {
    for (j = 0; j < columnas; j++) {
      cout << "MATRIZ[" << i + 1 << "," << j + 1 << "] = ";
      cout << setw(4) << matriz[i][j] << endl;
    }
  }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
