// C07EX09.CPP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  size_t tamano;
  vector<float> matriz;

  cout << setprecision(2) << fixed;

  cout << "Ingrese la cantidad de elementos: ";
  cin >> tamano;
  cin.ignore(80, '\n');

  // Redimensiona el vector al tamano ingresado
  matriz.resize(tamano);

  cout << endl;
  for (size_t i = 0; i < tamano; ++i) {
    cout << "Ingrese un valor para la variable MATRIZ[";
    cout << i + 1 << "] = ";
    cin >> matriz[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  cout << "Los valores ingresados son:" << endl;
  cout << endl;
  for (size_t i = 0; i < tamano; ++i) {
    cout << "MATRIZ[" << i + 1 << "] = ";
    cout << setw(4) << matriz[i] << endl;
  }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
