// C05EX12.CPP

#include <iostream>

using namespace std;

float a, b;

void suma(void)
{

  float r;

  cout << "Ingrese el 1er numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el 2do numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  r = a + b;

  cout << "El resultado de la suma es: " << r << endl;
}

int main(void)
{
  cout << "Calculadora de Suma" << endl;
  suma();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
