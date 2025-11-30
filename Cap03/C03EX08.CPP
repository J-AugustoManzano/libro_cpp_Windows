// C03EX08.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t numero;

  cout << "Ingrese un numero entero: ";
  cin >> numero;
  cin.ignore(80, '\n');

  if (not(numero == 5))
    cout << "El numero no es igual a 5." << endl;
  else
    cout << "El numero es igual a 5." << endl;

  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
