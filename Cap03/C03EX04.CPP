// C03EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b, r;

  cout << "Ingrese el valor <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el valor <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";

  if (r = a + b; r >= 10)
    cout << "Resultado = " << r + 5 << endl << endl;
  else
    cout << "Resultado = " << r - 7 << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
