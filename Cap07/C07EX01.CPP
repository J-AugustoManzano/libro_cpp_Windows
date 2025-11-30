// C07EX01.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  float notas[8], suma = 0, promedio;

  cout << setprecision(2) << fixed;

  cout << "Calculo del promedio escolar" << endl;
  cout << endl;

  for (size_t i = 0; i <= 7; ++i) {
    cout << "Ingrese la " << i + 1 << "a nota: ";
    cin >> notas[i];
    cin.ignore(80, '\n');
    suma += notas[i];
  }

  promedio = suma / 8;

  cout << endl;
  cout << "Promedio grupo = " << setw(6) << promedio << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
