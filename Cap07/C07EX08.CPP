// C07EX08.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  size_t tamano;
  float *pmatriz;

  cout << setprecision(2) << fixed;

  cout << "Ingrese la cantidad de elementos: ";
  cin >> tamano;
  cin.ignore(80, '\n');

  pmatriz = new float[tamano];

  cout << endl;
  for (size_t i = 0; i <= tamano - 1; ++i) {
    cout << "Ingrese un valor para la variable MATRIZ[";
    cout << i + 1 << "] = ";
    cin >> pmatriz[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  cout << "Los valores ingresados son:" << endl;
  cout << endl;
  for (size_t i = 0 ; i <= tamano - 1; ++i) {
     cout << "MATRIZ[" << i + 1 << "] = ";
     cout << setw(4) << pmatriz[i] << endl;
  }

  delete [] pmatriz;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
