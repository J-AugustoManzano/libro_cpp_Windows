// C07EX02.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void) 
{

  array<float, 8> notas; // Define el arreglo con 8 ele-mentos
  
  float suma = 0, promedio;

  cout << setprecision(2) << fixed;

  cout << "Calculo del promedio escolar" << endl;
  cout << endl;

  for (size_t i = 0; i < notas.size(); ++i) {
    cout << "Ingrese la " << i + 1 << "a nota: ";
    cin >> notas[i];
    cin.ignore(80, '\n');
    suma += notas[i];
  }

  promedio = suma / notas.size();

  cout << endl;
  cout << "Promedio grupo = " << setw(6) << promedio << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
