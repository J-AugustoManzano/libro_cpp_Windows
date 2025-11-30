// C07EX26.CPP

#include <iostream>

using namespace std;

#define producto(x, y) ((x) * (y))

#define intercambio(a, b) \
{                         \
  int32_t x = (a);        \
  (a) = (b);              \
  (b) = x;                \
}

int main(void)
{
  int32_t a, b;

  cout << "Ingrese el valor A: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el valor B: ";
  cin >> b;
  cin.ignore(80, '\n');

  intercambio(a, b);

  cout << "Valor A: " << a << endl;
  cout << "Valor B: " << b << endl;

  cout << "A x B = " << producto(a, b) << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
