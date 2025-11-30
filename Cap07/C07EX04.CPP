// C07EX04.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{
  array<int32_t, 5> a;
  int32_t suma = 0;

  cout << right;
  cout << "Sumatoria de elementos impares" << endl;
  cout << endl;

  // Entrada de datos
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << "Ingrese el elemento ";
    cout << setw(1) << i + 1 << ": ";
    cin >> a[i];
    cin.ignore(80, '\n');
  }

  // Procesamiento par o impar
  for (size_t i = 0; i < a.size(); ++i)
    if (a[i] % 2 != 0)
      suma += a[i];

  // Presentacion de la suma
  cout << "\nLa suma de los elementos impares equivale a: ";
  cout << suma << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
