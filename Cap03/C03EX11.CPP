// C03EX11.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b, r;

  cout << "Ingrese el valor <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el valor <B>: "; cin >> b;
  cin.ignore(80, '\n');

  r = (a > b) ? a : b;

  cout << "\nEl mayor valor ingresado es: " << r << ".\n";

  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
