// C05EX11.CPP

#include <iostream>

using namespace std;

float a, b, r;

void suma(void)
{
  cout << "Ingrese el 1er numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el 2do numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  r = a + b;
}

int main(void)
{
  cout << "Calculadora de Suma" << endl;
  suma();

  cout << "El resultado de la suma es: " << r << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
