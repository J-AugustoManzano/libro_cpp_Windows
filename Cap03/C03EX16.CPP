// C03EX16.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t n, r4, r5;

  cout << "Ingrese un numero natural: "; cin >> n;
  cin.ignore(80, '\n');
  cout << endl;

  r4 = n % 4; 
  r5 = n % 5;

  if (r4 == 0 and r5 == 0)
    cout << "Resultado = " << n << endl;
  else
    cout << "El valor no es divisible por 4 y 5" << endl;

  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
