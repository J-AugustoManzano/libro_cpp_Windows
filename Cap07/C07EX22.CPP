// C07EX22.CPP

#include <iostream>

using namespace std;

using entero = int32_t;
using real = float;

int main(void)
{

  entero a;
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
