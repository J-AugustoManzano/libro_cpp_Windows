// C07EX23.CPP

#include <iostream>

using namespace std;

using entero = int32_t;
using real = float;
using entero2 = entero;

int main(void)
{

  entero2 a;
  real b;

  cout << "Ingrese un valor entero: ";
  cin >> a;
  cin.ignore(80, '\n');
  cout << "Se ingreso el valor: " << a << endl;

  cout << endl;
  cout << "Ingrese un valor real: ";
  cin >> b;
  cin.ignore(80, '\n');
  cout << "Se ingreso el valor: " << b << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
