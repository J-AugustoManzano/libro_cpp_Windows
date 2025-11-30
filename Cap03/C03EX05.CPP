// C03EX05.CPP

#include <iostream>
#include <ciso646> // opcional en GCC

using namespace std;

int main(void)
{
  int32_t numero;

  cout << "Ingrese un valor: "; cin >> numero;
  cin.ignore(80, '\n');
  cout << endl;

  if (numero >= 20 and numero <= 90)
    cout << "El valor esta entre 20 y 90.";
  else
    cout << "El valor no esta entre 20 y 90.";

  cout << "\n" << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
